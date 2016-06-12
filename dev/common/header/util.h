/**
 *  Desenvolvido por Edwino Stein - edwino.stein@gmail.com
 */
#if !defined  _COMMON_UTIL
#define _COMMON_UTIL

    /* ************ SWAPs ************ */

    void swapInt(int *a, int *b);
    void swapUInt(unsigned int *a, unsigned int *b);
    void swapLInt(long int *a, long int *b);
    void swapULInt(unsigned long int *a, unsigned long int *b);
    void swapSInt(short int *a, short int *b);
    void swapUSInt(unsigned short int *a, unsigned short int *b);

    void swapFloat(float *a, float *b);
    void swapDouble(double *a, double *b);

    void swapChar(char *a, char *b);
    void swapUChar(unsigned char *a, unsigned char *b);
    void swapString(String a, String b);

    void swapBool(bool *a, bool *b);

    #define swap(a, b) _Generic((a),  int *: swapInt, \
                                      unsigned int *: swapUInt, \
                                      long int *: swapLInt, \
                                      unsigned long int *: swapULInt, \
                                      short int *: swapSInt, \
                                      unsigned short int *: swapUSInt, \
                                      float *: swapFloat, \
                                      double *: swapDouble, \
                                      char *: swapChar, \
                                      unsigned char *: swapUChar, \
                                      String: swapString, \
                                      bool *: swapBool, \
                                      default: printInt)(a, b)

#endif
