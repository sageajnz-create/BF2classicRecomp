#ifndef BF2_CMDLINE_PARSER_H
#define BF2_CMDLINE_PARSER_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Parses command-line argument string and sets process environment variables
 * (e.g. RECOMP_CONNECT_IP, RECOMP_CONNECT_PORT, RECOMP_FULLSCREEN, RECOMP_RES_SCALE).
 *
 * Parameters passed via CLI override any existing values in bf2_recomp.ini.
 */
void parse_recomp_cmdline(const char *cmdline);

#ifdef __cplusplus
}
#endif

#endif /* BF2_CMDLINE_PARSER_H */
