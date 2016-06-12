/**
 *  Desenvolvido por Edwino Stein - edwino.stein@gmail.com
 */

#if !defined _COMMON_STDINPUT
#define _COMMON_STDINPUT

    void flushInput();

    void readInt(int *var);
    void readFloat(float *var);
    void readDouble(double *var);

    void readChar(char *var);
    void readString(String var);
    void readStringMax(String var, unsigned int maxLength);

    void readBool(bool *var, const char* asTrue, const char* asFalse, int defaultVal, const char *error);

    void inputUnknownTypeError(void *var);

    #define read(var) _Generic((var),   int *: readInt, \
                                        float *: readFloat, \
                                        double *: readDouble, \
                                        char *: readChar, \
                                        String: readString, \
                                        default: inputUnknownTypeError)(var)

    #define readIntF(var, stringFormat, ...) printf(stringFormat, ##__VA_ARGS__); readInt(var)
    #define readFloatF(var, stringFormat, ...) printf(stringFormat, ##__VA_ARGS__); readFloat(var)
    #define readDoubleF(var, stringFormat, ...) printf(stringFormat, ##__VA_ARGS__); readDouble(var)
    #define readCharF(var, stringFormat, ...) printf(stringFormat, ##__VA_ARGS__); readChar(var)
    #define readStringF(var, stringFormat, ...) printf(stringFormat, ##__VA_ARGS__); readString(var)

    #define readF(var, stringFormat, ...) printf(stringFormat, ##__VA_ARGS__); \
            _Generic((var), \
                int *: readInt, \
                float *: readFloat, \
                double *: readDouble, \
                char *: readChar, \
                String: readString, \
                default: inputUnknownTypeError)(var)

#endif
