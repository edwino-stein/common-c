/**
 *  Desenvolvido por Edwino Stein - edwino.stein@gmail.com
 */

#include "../common.h"
#include <string.h>

/* Macro para padronizar a função int fpurge(FILE *) no OSX */
#if !defined __APPLE__
  #if !defined __fpurge
    #include <stdio_ext.h>
    #define fpurge(stream) __fpurge(stream)
  #endif
#endif


void flushInput(){
    fpurge(stdin);
}

void readInt(int *var){
    flushInput();
    scanf("%d", var);
}

void readFloat(float *var){
    flushInput();
    scanf("%f", var);
}

void readDouble(double *var){
    flushInput();
    scanf("%lf", var);
}

void readChar(char *var){
    flushInput();
    scanf("%c", var);
}

void readString(String var){

    int maxLength = 258;

    char *string;
    string = malloc(maxLength);

    if(!string){
        perror("malloc");
        exit(1);
    }

    flushInput();
    fgets(string, maxLength, stdin);

    //tira o caractere enter do final da string
    string[strlen(string)-1] = '\0';

    setString(var, string);
    free(string);
}

void readStringMax(String var, unsigned int maxLength){

    if(maxLength == 0) maxLength = 256;

    maxLength += 2; // aumenta o tamanho em 2 para ignorar os caracteres '\n' e '\0' ao final da string

    char *string;
    string = malloc(maxLength);

    if(!string){
        perror("malloc");
        exit(1);
    }

    flushInput();
    fgets(string, maxLength, stdin);

    //tira o caractere enter do final da string
    string[strlen(string)-1] = '\0';

    setString(var, string);
    free(string);
}

void readBool(bool *var, const char* asTrue, const char* asFalse, int defaultVal, const char *error){

    String input = newString(NULL);

    while(true){
        readString(input);

        if(cStrIsEqual(input, asTrue)){
            *var = true;
            break;
        }

        if(cStrIsEqual(input, asFalse)){
            *var = false;
            break;
        }

        if(defaultVal == 1){
            *var = true;
            break;
        }

        if(defaultVal == 0){
            *var = false;
            break;
        }

        if(error != NULL)
            printf("%s", error);
        else
            printf("Opção inválida! Tente %s ou %s.\n", asTrue, asFalse);
    }

    deleteString(input);
}

void inputUnknownTypeError(void *var){
    printf("Tipo de dado inválido para leitura.\n");
    exit(1);
}
