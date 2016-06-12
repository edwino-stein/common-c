/**
 *  Desenvolvido por Edwino Stein - edwino.stein@gmail.com
 */

#if !defined _COMMON_STDOUTPUT
#define _COMMON_STDOUTPUT

    void flushOutput();

    void printNewLine();
    void printInt(int var);
    void printIntLn(int var);
    void printFloat(float var);
    void printFloatLn(float var);
    void printDouble(double var);
    void printDoubleLn(double var);
    void printChar(char var);
    void printCharLn(char var);
    void printString(String var);
    void printStringLn(String var);
    void printCString(const char * var);
    void printCStringLn(const char * var);
    void printBool(bool var, const char* asTrue, const char* asFalse);
    void printBoolLn(bool var, const char* asTrue, const char* asFalse);

    #define print(var) _Generic((var),  int: printInt, \
                                        float: printFloat, \
                                        double: printDouble, \
                                        char: printChar, \
                                        String: printString, \
                                        char *: printCString, \
                                        const char *: printCString, \
                                        default: printInt)(var)

    #define printLn(var) _Generic((var),int: printIntLn, \
                                        float: printFloatLn, \
                                        double: printDoubleLn, \
                                        char: printCharLn, \
                                        String: printStringLn, \
                                        char *: printCStringLn, \
                                        const char *: printCStringLn, \
                                        default: printIntLn)(var)

#endif
