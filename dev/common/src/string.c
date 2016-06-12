/**
 *  Desenvolvido por Edwino Stein - edwino.stein@gmail.com
 */

#include "../common.h"
#include <string.h>
#include <ctype.h>

const char _emptyString = '\0';

String newString(const char *init){

    String str;
    str = malloc(sizeof(_String));

    str->cString = NULL;
    setString(str, init);
    return str;
}

void deleteString(String str){
    eraseString(str);
    free(str);
}

void setString(String str, const char *value){

    if(value == NULL){
        str->cString = NULL;
        return;
    }

    eraseString(str);
    str->cString = malloc(strlen(value));
    strcpy(str->cString, value);
}

void copyString(String destination, String source){
    setString(destination, source->cString);
}

void concatenateString(String destination, String source){

    unsigned int lenD = strLength(destination);
    unsigned int lenS = strLength(source);

    if(lenS == 0) return;
    if(lenD == 0 && lenS == 0) return;

    if(lenD > 0){
        lenD += lenS;
        char *newStr = malloc(lenD);

        strcpy(newStr, destination->cString);
        strcat(newStr, source->cString);

        setString(destination, newStr);
        free(newStr);
    }
    else{
        setString(destination, source->cString);
    }

}

void concatenateCString(String destination, const char *source){

    if(source == NULL) return;

    unsigned int lenD = strLength(destination);
    unsigned int lenS = (unsigned int) strlen(source);

    if(lenS == 0) return;
    if(lenD == 0 && lenS == 0) return;

    if(lenD > 0){
        lenD += lenS;
        char *newStr = malloc(lenD);

        strcpy(newStr, destination->cString);
        strcat(newStr, source);

        setString(destination, newStr);
        free(newStr);
    }
    else{
        setString(destination, source);
    }
}

bool strIsEqual(String str1, String str2){

    bool str1Empty = strIsEmpty(str1);
    bool str2Empty = strIsEmpty(str2);

    if(str1Empty && str2Empty) return true;
    if(str1Empty || str2Empty) return false;

    return strcmp(str1->cString, str2->cString) == 0;
}

bool cStrIsEqual(String str1, const char *str2){

    bool str1Empty = strIsEmpty(str1);
    bool str2Empty = (str2 == NULL || strlen(str2) == 0);

    if(str1Empty && str2Empty) return true;
    if(str1Empty || str2Empty) return false;

    return strcmp(str1->cString, str2) == 0;
}

char getStrChar(String str, unsigned int pos){
    return (pos >= strLength(str)) ? _emptyString : str->cString[pos];
}

char * getStrPointerChar(String str, unsigned int pos){
    return (pos >= strLength(str)) ? NULL : &str->cString[pos];
}

char getStrFirstChar(String str){
    return strIsEmpty(str) ? _emptyString : str->cString[0];
}

char getStrLastChar(String str){
    return strIsEmpty(str) ? _emptyString : str->cString[strlen(str->cString) - 1];
}

const char *getCStr(String str){
    return str->cString == NULL ? &_emptyString : str->cString;
}

void eraseString(String str){

    if(str->cString != NULL){
        free(str->cString);
        str->cString = NULL;
    }
}

unsigned int strLength(String str){
    return str->cString == NULL ? 0 : (unsigned int) strlen(str->cString);
}

bool strIsEmpty(String str){
    if(str->cString == NULL) return true;
    if(strlen(str->cString) == 0) return true;
    return false;
}

void strToUpper(String str){
    int i = 0;
    while(str->cString[i] != '\0'){
        str->cString[i] = toupper(str->cString[i]);
        i++;
    }
}

void strToLower(String str){
    int i = 0;
    while(str->cString[i] != '\0'){
        str->cString[i] = tolower(str->cString[i]);
        i++;
    }
}
