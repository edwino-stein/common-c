/**
 *  Desenvolvido por Edwino Stein - edwino.stein@gmail.com
 */

#if !defined _COMMON_CONSOLE
#define _COMMON_CONSOLE

    void consoleClear();
    void consolePause();
    void consoleStrExec(String cmd);
    void consoleCExec(const char *cmd);
    void consoleGotoXY(int x, int y);

    #define consoleExec(cmd) _Generic((cmd),    String: consoleStrExec, \
                                                char *:consoleCExec, \
                                                const char *: consoleCExec)(cmd)

#endif
