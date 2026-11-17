#define COBJMACROS
#include <windows.h>
#include <d3d11.h>
#include <stdio.h>

int main(void)
{
    ID3D11Device *device = NULL;
    ID3D11DeviceContext *context = NULL;
    D3D_FEATURE_LEVEL feature_level;
    
    HRESULT hr = D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, 0,
                                   NULL, 0, D3D11_SDK_VERSION,
                                   &device, &feature_level, &context);
    if (FAILED(hr)) {
        printf("D3D11CreateDevice failed: 0x%08X\n", (unsigned)hr);
        return 1;
    }
    printf("Feature level: 0x%X\n", (unsigned)feature_level);

    D3D11_BUFFER_DESC desc = {0};
    desc.ByteWidth = 65536;
    desc.Usage = D3D11_USAGE_DYNAMIC;
    desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
    desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
    desc.MiscFlags = D3D11_RESOURCE_MISC_BUFFER_STRUCTURED;
    desc.StructureByteStride = 4;

    ID3D11Buffer *buffer = NULL;
    hr = ID3D11Device_CreateBuffer(device, &desc, NULL, &buffer);
    printf("Create dynamic structured buffer: hr=0x%08X (buffer=%p)\n", (unsigned)hr, buffer);

    if (SUCCEEDED(hr) && buffer) {
        D3D11_SHADER_RESOURCE_VIEW_DESC sdesc = {0};
        sdesc.ViewDimension = D3D11_SRV_DIMENSION_BUFFER;
        sdesc.Buffer.NumElements = 65536 / 4;
        ID3D11ShaderResourceView *srv = NULL;
        hr = ID3D11Device_CreateShaderResourceView(device, (ID3D11Resource *)buffer, &sdesc, &srv);
        printf("Create SRV: hr=0x%08X (srv=%p)\n", (unsigned)hr, srv);

        D3D11_MAPPED_SUBRESOURCE map;
        hr = ID3D11DeviceContext_Map(context, (ID3D11Resource *)buffer, 0, D3D11_MAP_WRITE_DISCARD, 0, &map);
        printf("Map WRITE_DISCARD: hr=0x%08X\n", (unsigned)hr);
        if (SUCCEEDED(hr)) {
            ID3D11DeviceContext_Unmap(context, (ID3D11Resource *)buffer, 0);
        }

        hr = ID3D11DeviceContext_Map(context, (ID3D11Resource *)buffer, 0, D3D11_MAP_WRITE_NO_OVERWRITE, 0, &map);
        printf("Map WRITE_NO_OVERWRITE: hr=0x%08X\n", (unsigned)hr);
        if (SUCCEEDED(hr)) {
            ID3D11DeviceContext_Unmap(context, (ID3D11Resource *)buffer, 0);
        }
        if (srv) ID3D11ShaderResourceView_Release(srv);
        ID3D11Buffer_Release(buffer);
    }

    ID3D11DeviceContext_Release(context);
    ID3D11Device_Release(device);
    return 0;
}
