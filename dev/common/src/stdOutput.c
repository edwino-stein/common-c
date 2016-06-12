/**
 *  Desenvolvido por Edwino Stein - edwino.stein@gmail.com
 */

#include "../common.h"

void flushOutput() {
    fflush(stdout);
}

void printNewLine(){
    printf("\n");
}

void printInt(int var){
    printf("%d", var);
}

void printIntLn(int var){
    printf("%d\n", var);
}

void printFloat(float var){
    printf("%f", var);
}

void printFloatLn(float var){
    printf("%f\n", var);
}

void printDouble(double var){
    printf("%lf", var);
}

void printDoubleLn(double var){
    printf("%lf\n", var);
}

void printChar(char var){
    printf("%c", var);
}

void printCharLn(char var){
    printf("%c\n", var);
}

void printString(String var){
    printf("%s", getCStr(var));
}

void printStringLn(String var){
    printf("%s\n", getCStr(var));
}

void printCString(const char * var){
    printf("%s", var);
}

void printCStringLn(const char * var){
    printf("%s\n", var);
}

void printBool(bool var, const char* asTrue, const char* asFalse){
    printf("%s", var ? asTrue : asFalse);
}

void printBoolLn(bool var, const char* asTrue, const char* asFalse){
    printf("%s\n", var ? asTrue : asFalse);
}
