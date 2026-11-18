#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "../src/cmdline_parser.h"

static const char* get_env_safe(const char *key)
{
    const char *v = getenv(key);
    return v ? v : "";
}

int main(void)
{
    printf("--- Running CLI Argument Parser Unit Tests ---\n");

    /* 1. Basic -connect with IP and Port */
    parse_recomp_cmdline("-connect 192.168.1.100:3074");
    assert(strcmp(get_env_safe("RECOMP_CONNECT_IP"), "192.168.1.100") == 0);
    assert(strcmp(get_env_safe("RECOMP_CONNECT_PORT"), "3074") == 0);
    printf("  [PASS] -connect ip:port\n");

    /* 2. -connect with IP only (default port 3074) */
    parse_recomp_cmdline("-connect 10.0.0.5");
    assert(strcmp(get_env_safe("RECOMP_CONNECT_IP"), "10.0.0.5") == 0);
    assert(strcmp(get_env_safe("RECOMP_CONNECT_PORT"), "3074") == 0);
    printf("  [PASS] -connect ip default port\n");

    /* 3. -fullscreen / -windowed */
    parse_recomp_cmdline("-fullscreen");
    assert(strcmp(get_env_safe("RECOMP_FULLSCREEN"), "1") == 0);
    parse_recomp_cmdline("-windowed");
    assert(strcmp(get_env_safe("RECOMP_FULLSCREEN"), "0") == 0);
    printf("  [PASS] -fullscreen / -windowed\n");

    /* 4. -res scale and -aspect */
    parse_recomp_cmdline("-res 3 -aspect 21:9");
    assert(strcmp(get_env_safe("RECOMP_RES_SCALE"), "3") == 0);
    assert(strcmp(get_env_safe("RECOMP_ASPECT"), "21:9") == 0);
    printf("  [PASS] -res and -aspect\n");

    /* 5. -mod <id> */
    parse_recomp_cmdline("-mod BFR");
    assert(strcmp(get_env_safe("RECOMP_ACTIVE_MOD"), "BFR") == 0);
    printf("  [PASS] -mod\n");

    /* 6. Compound command line with quoted executable prefix */
    parse_recomp_cmdline("\"C:\\Games\\swbf2_recomp.exe\" -connect 127.0.0.1:3658 -res 4 -aspect 32:9 -mod KOTOR -fullscreen");
    assert(strcmp(get_env_safe("RECOMP_CONNECT_IP"), "127.0.0.1") == 0);
    assert(strcmp(get_env_safe("RECOMP_CONNECT_PORT"), "3658") == 0);
    assert(strcmp(get_env_safe("RECOMP_RES_SCALE"), "4") == 0);
    assert(strcmp(get_env_safe("RECOMP_ASPECT"), "32:9") == 0);
    assert(strcmp(get_env_safe("RECOMP_ACTIVE_MOD"), "KOTOR") == 0);
    assert(strcmp(get_env_safe("RECOMP_FULLSCREEN"), "1") == 0);
    printf("  [PASS] compound command line\n");

    printf("All CLI Argument Parser tests passed successfully!\n");
    return 0;
}
