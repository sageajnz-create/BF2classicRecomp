/* Offline guest-attribute gather and transform verification. */
#define CINTERFACE
#define COBJMACROS
#define WIN32_LEAN_AND_MEAN
#include <d3d11.h>
#include <d3dcompiler.h>
#include <xmmintrin.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nv2a_vsh_interp.h"
#include "gpu_vsh_shader.h"

enum { BATCH = 128, PROGRAMS = 600, INST_CAP = NV2A_VSH_SLOTS };
#define STRIDE NV2A_VSH_GPU_INST_STRIDE
#define VSH_CAP_VERTS 64    /* matches VSH_RAW_VERTS in nv2a_vsh_interp.c */

static uint32_t seed = 0x5EED1234u;
static uint32_t rnd(void)
{
    seed ^= seed << 13; seed ^= seed >> 17; seed ^= seed << 5; return seed;
}
static float rndf(void)
{
    return ((float)(rnd() & 0xFFFF) / 65535.0f - 0.5f) * 16.0f;
}

static void die(const char *m) { fprintf(stderr, "FAIL: %s\n", m); exit(2); }
static void check_hr(HRESULT hr, const char *s)
{
    if (FAILED(hr)) { fprintf(stderr, "D3D11 %s failed 0x%08lX\n", s, (unsigned long)hr); exit(2); }
}

static ID3D11Buffer *structured(ID3D11Device *d, UINT count, UINT stride, UINT bind, const void *data)
{
    D3D11_BUFFER_DESC desc = {0};
    D3D11_SUBRESOURCE_DATA init = {data, 0, 0};
    ID3D11Buffer *b;
    desc.ByteWidth = count * stride;
    desc.Usage = D3D11_USAGE_DEFAULT;
    desc.BindFlags = bind;
    desc.MiscFlags = D3D11_RESOURCE_MISC_BUFFER_STRUCTURED;
    desc.StructureByteStride = stride;
    check_hr(ID3D11Device_CreateBuffer(d, &desc, data ? &init : NULL, &b), "CreateBuffer");
    return b;
}
static ID3D11ShaderResourceView *srv(ID3D11Device *d, ID3D11Buffer *b, UINT count)
{
    D3D11_SHADER_RESOURCE_VIEW_DESC desc = {0};
    ID3D11ShaderResourceView *v;
    desc.ViewDimension = D3D11_SRV_DIMENSION_BUFFER;
    desc.Buffer.NumElements = count;
    check_hr(ID3D11Device_CreateShaderResourceView(d, (ID3D11Resource *)b, &desc, &v), "CreateSRV");
    return v;
}

enum { RAW_BYTES = 65536, VERTS = 128 };
static unsigned char raw[RAW_BYTES];
static uint32_t attrs[16][4], indices[VERTS];
static float defaults[16][4], expected[VERTS][16][4];

/* Scalar reference follows fetch_attr; offsets refer to an already-validated
 * upload, where zero is legal. Arithmetic stays 64-bit for bounds checking. */
static void reference(unsigned slot, uint32_t index, uint32_t mask, uint32_t length, float out[4])
{
    const uint32_t *d = attrs[slot];
    if (!(mask & (1u << slot))) { memcpy(out, defaults[slot], 16); return; }
    out[0] = out[1] = out[2] = 0; out[3] = 1;
    unsigned n = d[3] < 4 ? d[3] : 4;
    unsigned bytes = d[2] == 0 || d[2] == 6 ? 4 :
                     d[2] == 1 || d[2] == 5 ? 2*n : d[2] == 4 ? n : 4*n;
    uint64_t at = (uint64_t)d[0] + (uint64_t)index * d[1];
    if (!n || !d[1] || at + bytes > length) return;
    const unsigned char *p = raw + at;
    if (d[2] == 0) {
        out[0]=p[2]/255.0f; out[1]=p[1]/255.0f;
        out[2]=p[0]/255.0f; out[3]=p[3]/255.0f;
    } else if (d[2] == 6) {
        uint32_t v; memcpy(&v,p,4);
        out[0]=(float)((int32_t)(v<<21)>>21)/1023.0f;
        out[1]=(float)((int32_t)(v<<10)>>21)/1023.0f;
        out[2]=(float)((int32_t)v>>22)/511.0f;
    } else for (unsigned k=0;k<n;k++) {
        if(d[2]==2) memcpy(out+k,p+4*k,4);
        else if(d[2]==4) out[k]=p[k]/255.0f;
        else if(d[2]==1 || d[2]==5) {
            int16_t v; memcpy(&v,p+2*k,2);
            out[k]=d[2]==1 ? v/32767.0f : (float)v;
        }
    }
}

static int equal_float(float a,float b)
{
    if(isnan(a)||isnan(b)) return isnan(a)&&isnan(b);
    if(isinf(a)||isinf(b)) return a==b;
    return fabsf(a-b)<=1e-7f+1e-6f*fmaxf(fabsf(a),fabsf(b));
}

static float cpu_fog(float d, uint32_t mode, float px, float py)
{
    if (!mode) return 1.0f;
    float f;
    if (mode == 0x800 || mode == 0x802)
        f = px + exp2f(d * py * 16.0f) - 1.5f;
    else if (mode == 0x801 || mode == 0x803)
        f = px + exp2f(-d * d * py * py * 32.0f) - 1.5f;
    else
        f = px + d * py - 1.0f;
    if (mode == 0x802 || mode == 0x803 || mode == 0x804)
        f = fabsf(f);
    if (isnan(f))
        f = 1.0f;
    return f < 0.0f ? 0.0f : (f > 1.0f ? 1.0f : f);
}

int main(void)
{
    ID3D11Device *dev; ID3D11DeviceContext *ctx;
    ID3D11ComputeShader *shaders[3];
    ID3D11VertexShader *vsh = NULL;
    ID3D11Buffer *buffers[7], *out, *staging, *params[3];
    ID3D11ShaderResourceView *views[7];
    ID3D11UnorderedAccessView *uav, *none=NULL;
    D3D11_BUFFER_DESC bd={0}; D3D11_UNORDERED_ACCESS_VIEW_DESC ud={0};
    uint32_t ins[NV2A_VSH_GPU_INST_STRIDE]={0};
    float constants[NV2A_VSH_CONSTANTS][4]={0};
    unsigned long long checked=0;
    _mm_setcsr(_mm_getcsr() | 0x8040);
    check_hr(D3D11CreateDevice(NULL,D3D_DRIVER_TYPE_HARDWARE,NULL,0,NULL,0,
        D3D11_SDK_VERSION,&dev,NULL,&ctx),"device");
    static const char *cs_names[3] = {"cs_gather", "cs_gather_transform", "cs_gather_vertex"};
    for(int mode=0;mode<3;mode++) {
        ID3DBlob *code=NULL,*error=NULL;
        HRESULT hr=D3DCompile(bf2_vsh_source,sizeof bf2_vsh_source-1,"gather",NULL,NULL,
            cs_names[mode],"cs_5_0",D3DCOMPILE_OPTIMIZATION_LEVEL3,
            0,&code,&error);
        if(FAILED(hr)&&error) fprintf(stderr,"%s",(char*)ID3D10Blob_GetBufferPointer(error));
        if(error) ID3D10Blob_Release(error);
        check_hr(hr,"compile");
        check_hr(ID3D11Device_CreateComputeShader(dev,ID3D10Blob_GetBufferPointer(code),
            ID3D10Blob_GetBufferSize(code),NULL,&shaders[mode]),"shader");
        ID3D10Blob_Release(code);
    }
    {
        ID3DBlob *code=NULL,*error=NULL;
        HRESULT hr=D3DCompile(bf2_vsh_source,sizeof bf2_vsh_source-1,"gather_vs",NULL,NULL,
            "vs_gather_transform","vs_5_0",D3DCOMPILE_OPTIMIZATION_LEVEL3,
            0,&code,&error);
        if(FAILED(hr)&&error) fprintf(stderr,"%s",(char*)ID3D10Blob_GetBufferPointer(error));
        if(error) ID3D10Blob_Release(error);
        check_hr(hr,"compile vs_gather_transform");
        check_hr(ID3D11Device_CreateVertexShader(dev,ID3D10Blob_GetBufferPointer(code),
            ID3D10Blob_GetBufferSize(code),NULL,&vsh),"create vs_gather_transform");
        ID3D10Blob_Release(code);
    }
    UINT counts[7]={STRIDE,NV2A_VSH_CONSTANTS,16,RAW_BYTES/4,16,VERTS,16};
    UINT strides[7]={4,16,16,4,16,4,16};
    for(int i=0;i<7;i++) {
        buffers[i]=structured(dev,counts[i],strides[i],D3D11_BIND_SHADER_RESOURCE,NULL);
        views[i]=srv(dev,buffers[i],counts[i]);
    }
    out=structured(dev,VERTS*16,16,D3D11_BIND_UNORDERED_ACCESS,NULL);
    ud.ViewDimension=D3D11_UAV_DIMENSION_BUFFER; ud.Buffer.NumElements=VERTS*16;
    check_hr(ID3D11Device_CreateUnorderedAccessView(dev,(ID3D11Resource*)out,&ud,&uav),"uav");
    bd.ByteWidth=VERTS*16*16; bd.Usage=D3D11_USAGE_STAGING; bd.CPUAccessFlags=D3D11_CPU_ACCESS_READ;
    check_hr(ID3D11Device_CreateBuffer(dev,&bd,NULL,&staging),"staging");
    bd.ByteWidth=16; bd.Usage=D3D11_USAGE_DEFAULT; bd.CPUAccessFlags=0; bd.BindFlags=D3D11_BIND_CONSTANT_BUFFER;
    for(int i=0;i<2;i++) check_hr(ID3D11Device_CreateBuffer(dev,&bd,NULL,&params[i]),"params");
    bd.ByteWidth=32;
    check_hr(ID3D11Device_CreateBuffer(dev,&bd,NULL,&params[2]),"params2");
    ID3D11DeviceContext_UpdateSubresource(ctx,(ID3D11Resource*)buffers[1],0,NULL,constants,0,0);
    nv2a_vsh_set_cxt_write(0); nv2a_vsh_set_start_slot(0);
    for(unsigned trial=0;trial<200;trial++) {
        uint32_t gp[4]={RAW_BYTES-(trial%4),rnd()&65535,VERTS,0}, ip[4]={1,VERTS,0,0};
        struct {
            float aa_scale[2];
            float fog_param[2];
            uint32_t fog_mode;
            uint32_t reserved[3];
        } tp = {
            {1.0f + (trial % 2) * 0.25f, 1.0f + ((trial + 1) % 2) * 0.25f},
            {rndf(), rndf()},
            trial % 5 == 0 ? 0 : 0x800 + (trial % 4),
            {0, 0, 0}
        };
        for(unsigned i=0;i<RAW_BYTES;i++) raw[i]=(unsigned char)rnd();
        for(unsigned a=0;a<16;a++) {
            attrs[a][0]=a*2048+(trial%4); attrs[a][1]=17+(trial%15);
            attrs[a][2]=(a+trial)%8; attrs[a][3]=(a+trial/8)%6;
            for(int k=0;k<4;k++) defaults[a][k]=(float)(a*4+k)+0.25f;
            if(attrs[a][2]==2) for(unsigned v=0;v<64;v++) for(unsigned k=0;k<4;k++) {
                float f=rndf(); memcpy(raw+attrs[a][0]+v*attrs[a][1]+k*4,&f,4);
            }
        }
        attrs[12][0]=RAW_BYTES-8; attrs[13][0]=UINT32_MAX-3;
        attrs[14][1]=0; attrs[15][1]=UINT32_MAX;
        gp[1]|=0xf000; /* Always exercise invalid spans and overflow. */
        for(unsigned v=0;v<VERTS;v++) {
            indices[v]=v==0?UINT32_MAX:v==1?0:rnd()%64;
            for(unsigned a=0;a<16;a++) reference(a,indices[v],gp[1],gp[0],expected[v][a]);
        }
        uint32_t words[4]={0,(1u<<21)|((trial%16)<<9)|0x1b,2u<<26,(15u<<12)|(1u<<11)|1};
        nv2a_vsh_set_instruction(0,words);
        if(nv2a_vsh_export_gpu(ins,1,constants,NV2A_VSH_CONSTANTS)!=1) die("program export");
        const void *data[7]={ins,constants,defaults,raw,attrs,indices,defaults};
        for(int i=0;i<7;i++) ID3D11DeviceContext_UpdateSubresource(ctx,(ID3D11Resource*)buffers[i],0,NULL,data[i],0,0);
        ID3D11DeviceContext_UpdateSubresource(ctx,(ID3D11Resource*)params[0],0,NULL,ip,0,0);
        ID3D11DeviceContext_UpdateSubresource(ctx,(ID3D11Resource*)params[1],0,NULL,gp,0,0);
        ID3D11DeviceContext_UpdateSubresource(ctx,(ID3D11Resource*)params[2],0,NULL,&tp,0,0);
        for(int mode=0;mode<3;mode++) {
            ID3D11DeviceContext_CSSetShader(ctx,shaders[mode],NULL,0);
            ID3D11DeviceContext_CSSetConstantBuffers(ctx,0,3,params);
            ID3D11DeviceContext_CSSetShaderResources(ctx,0,7,views);
            ID3D11DeviceContext_CSSetUnorderedAccessViews(ctx,0,1,&uav,NULL);
            ID3D11DeviceContext_Dispatch(ctx,(VERTS+63)/64,1,1);
            ID3D11DeviceContext_CSSetUnorderedAccessViews(ctx,0,1,&none,NULL);
            ID3D11DeviceContext_CopyResource(ctx,(ID3D11Resource*)staging,(ID3D11Resource*)out);
            D3D11_MAPPED_SUBRESOURCE map;
            check_hr(ID3D11DeviceContext_Map(ctx,(ID3D11Resource*)staging,0,D3D11_MAP_READ,0,&map),"read");
            for(unsigned v=0;v<VERTS;v++) {
                Nv2aVshOutput cpu;
                if(mode&&!nv2a_vsh_run(expected[v],&cpu)) die("CPU program");
                float vert[32];
                const float *ref;
                if(mode==0) ref=(const float*)expected[v];
                else if(mode==1) ref=(const float*)&cpu;
                else {
                    float w = cpu.pos[3];
                    if (w == 0.0f && !signbit(w)) w = 1.0f;
                    float pos_xy[2] = { cpu.pos[0] * tp.aa_scale[0], cpu.pos[1] * tp.aa_scale[1] };
                    vert[0] = (pos_xy[0] / 320.0f - 1.0f) * w;
                    vert[1] = (1.0f - pos_xy[1] / 240.0f) * w;
                    vert[2] = (cpu.pos[2] / 33554432.0f) * w;
                    vert[3] = w;
                    vert[4] = cpu.d0[0]; vert[5] = cpu.d0[1]; vert[6] = cpu.d0[2]; vert[7] = cpu.d0[3];
                    vert[8] = cpu.d1[0]; vert[9] = cpu.d1[1]; vert[10] = cpu.d1[2]; vert[11] = cpu.d1[3];
                    float inv_w = 1.0f / w;
                    for (int st = 0; st < 4; st++) {
                        vert[12 + st * 4 + 0] = cpu.tex[st][0] * inv_w;
                        vert[12 + st * 4 + 1] = cpu.tex[st][1] * inv_w;
                        vert[12 + st * 4 + 2] = cpu.tex[st][2] * inv_w;
                        vert[12 + st * 4 + 3] = cpu.tex[st][3] * inv_w;
                    }
                    vert[28] = cpu_fog(cpu.fog[0], tp.fog_mode, tp.fog_param[0], tp.fog_param[1]);
                    vert[29] = vert[30] = vert[31] = 0.0f;
                    ref = vert;
                }
                const float *gpu=(const float*)map.pData+v*(mode==0?64:32);
                for(unsigned k=0;k<(mode==0?64u:32u);k++,checked++) if(!equal_float(ref[k],gpu[k])) {
                    fprintf(stderr,"trial %u mode %d vertex %u float %u CPU %.9g GPU %.9g\n",trial,mode,v,k,ref[k],gpu[k]);
                    return 1;
                }
            }
            ID3D11DeviceContext_Unmap(ctx,(ID3D11Resource*)staging,0);
        }
    }
    printf("gather and transform: %llu floats matched across 200 layouts, all formats, unaligned and overflowing indices\n",checked);
    ID3D11DeviceContext_ClearState(ctx);
    for(int i=0;i<7;i++){ID3D11ShaderResourceView_Release(views[i]); ID3D11Buffer_Release(buffers[i]);}
    for(int i=0;i<2;i++){ID3D11ComputeShader_Release(shaders[i]); ID3D11Buffer_Release(params[i]);}
    ID3D11UnorderedAccessView_Release(uav); ID3D11Buffer_Release(out); ID3D11Buffer_Release(staging);
    ID3D11DeviceContext_Release(ctx); ID3D11Device_Release(dev);
    return 0;
}

