#include "cmdline_parser.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#ifdef _WIN32
  #define RECOMP_SETENV(k, v) _putenv_s(k, v)
#else
  #define RECOMP_SETENV(k, v) setenv(k, v, 1)
#endif

/* Tokenizes command line while handling quotes */
static int get_next_token(const char **cursor, char *token_out, size_t max_len)
{
    const char *p = *cursor;
    while (*p && isspace((unsigned char)*p)) p++;
    if (!*p) {
        *cursor = p;
        token_out[0] = '\0';
        return 0;
    }

    size_t idx = 0;
    int in_quote = 0;

    while (*p) {
        if (*p == '"') {
            in_quote = !in_quote;
            p++;
            continue;
        }
        if (!in_quote && isspace((unsigned char)*p)) {
            break;
        }
        if (idx + 1 < max_len) {
            token_out[idx++] = *p;
        }
        p++;
    }

    token_out[idx] = '\0';
    *cursor = p;
    return 1;
}

void parse_recomp_cmdline(const char *cmdline)
{
    if (!cmdline || !cmdline[0]) return;

    const char *p = cmdline;
    char token[256];
    char next_val[256];

    while (get_next_token(&p, token, sizeof(token))) {
        /* Check for -connect <ip>[:<port>] */
        if (_stricmp(token, "-connect") == 0 || _stricmp(token, "--connect") == 0) {
            if (get_next_token(&p, next_val, sizeof(next_val))) {
                char *colon = strchr(next_val, ':');
                if (colon) {
                    *colon = '\0';
                    const char *port_str = colon + 1;
                    RECOMP_SETENV("RECOMP_CONNECT_IP", next_val);
                    RECOMP_SETENV("RECOMP_CONNECT_PORT", port_str);
                } else {
                    RECOMP_SETENV("RECOMP_CONNECT_IP", next_val);
                    RECOMP_SETENV("RECOMP_CONNECT_PORT", "3074");
                }
            }
        }
        /* Check for -fullscreen / -windowed */
        else if (_stricmp(token, "-fullscreen") == 0 || _stricmp(token, "--fullscreen") == 0) {
            RECOMP_SETENV("RECOMP_FULLSCREEN", "1");
        }
        else if (_stricmp(token, "-windowed") == 0 || _stricmp(token, "--windowed") == 0) {
            RECOMP_SETENV("RECOMP_FULLSCREEN", "0");
        }
        /* Check for -res <scale> */
        else if (_stricmp(token, "-res") == 0 || _stricmp(token, "--res") == 0 ||
                 _stricmp(token, "-res_scale") == 0) {
            if (get_next_token(&p, next_val, sizeof(next_val))) {
                RECOMP_SETENV("RECOMP_RES_SCALE", next_val);
            }
        }
        /* Check for -aspect <ratio> */
        else if (_stricmp(token, "-aspect") == 0 || _stricmp(token, "--aspect") == 0) {
            if (get_next_token(&p, next_val, sizeof(next_val))) {
                RECOMP_SETENV("RECOMP_ASPECT", next_val);
            }
        }
        /* Check for -mod <id> */
        else if (_stricmp(token, "-mod") == 0 || _stricmp(token, "--mod") == 0) {
            if (get_next_token(&p, next_val, sizeof(next_val))) {
                RECOMP_SETENV("RECOMP_ACTIVE_MOD", next_val);
            }
        }
        /* Check for -fps <limit> */
        else if (_stricmp(token, "-fps") == 0 || _stricmp(token, "--fps") == 0) {
            if (get_next_token(&p, next_val, sizeof(next_val))) {
                RECOMP_SETENV("RECOMP_FPS_LIMIT", next_val);
            }
        }
        /* Check for -show_fps / -noshow_fps */
        else if (_stricmp(token, "-show_fps") == 0) {
            RECOMP_SETENV("RECOMP_SHOW_FPS", "1");
        }
        else if (_stricmp(token, "-noshow_fps") == 0) {
            RECOMP_SETENV("RECOMP_SHOW_FPS", "0");
        }
    }
}
