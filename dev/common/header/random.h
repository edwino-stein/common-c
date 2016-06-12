/**
 *  Desenvolvido por Edwino Stein - edwino.stein@gmail.com
 */

#if !defined _COMMON_RANDOM
#define _COMMON_RANDOM

    unsigned int randInt(unsigned int max);
    unsigned int randIntB2in(unsigned int min, unsigned int max);
    double randDouble();
    double randDoubleB2in(unsigned int min, unsigned int max);

    char randChar();
    char randCharPrintable(bool alphanumericOnly);
    bool randBool(unsigned int toTrue, unsigned int toFalse);

#endif
