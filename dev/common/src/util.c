/**
 *  Desenvolvido por Edwino Stein - edwino.stein@gmail.com
 */

#include "../common.h"

/* ************ SWAPs ************ */

void swapInt(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swapUInt(unsigned int *a, unsigned int *b){
    unsigned int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swapLInt(long int *a, long int *b){
    long int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swapULInt(unsigned long int *a, unsigned long int *b){
    unsigned long int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swapSInt(short int *a, short int *b){
    short int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swapUSInt(unsigned short int *a, unsigned short int *b){
    unsigned short int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swapFloat(float *a, float *b){
    float tmp = *a;
    *a = *b;
    *b = tmp;
}

void swapDouble(double *a, double *b){
    double tmp = *a;
    *a = *b;
    *b = tmp;
}

void swapChar(char *a, char *b){
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

void swapUChar(unsigned char *a, unsigned char *b){
    unsigned char tmp = *a;
    *a = *b;
    *b = tmp;
}

void swapString(String a, String b){
    String tmp = newString(getCStr(a));
    copyString(a, b);
    copyString(b, tmp);
    deleteString(tmp);
}

void swapBool(bool *a, bool *b){
    bool tmp = *a;
    *a = *b;
    *b = tmp;
}
