/**
 *  Desenvolvido por Edwino Stein - edwino.stein@gmail.com
 */

#include "../common.h"
#include <time.h>

unsigned int randInt(unsigned int max){

    static unsigned int currentSeed;
    unsigned int seed = (unsigned) time(NULL);

    //Assegura que a seed não sera igual a ultima seed utilizada
    if(currentSeed == seed)
        seed += (rand() % seed) * 2 ;
    else
        currentSeed = seed;

    srand(seed);
    return max <= 0 ? rand() : rand() % (max + 1);
}

unsigned int randIntB2in(unsigned int min, unsigned int max){

    //Verifica os limites
    if(max < min) swap(&max, &min);
    if(max == min && max != 0) return max;

    static unsigned int currentSeed;
    unsigned int seed = (unsigned) time(NULL);

    //Assegura que a seed não sera igual a ultima seed utilizada
    if(currentSeed == seed)
        seed += (rand() % seed) * 2 ;
    else
        currentSeed = seed;

    srand(seed);
    return max <= 0 ? rand() : (rand() % (max - min + 1)) + min;
}

double randDouble(){

    unsigned int i = randIntB2in(1, 5),
                 j = randIntB2in(i + 1, 100);

    return ((double) i)/((double) j);
}

double randDoubleB2in(unsigned int min, unsigned int max){
    if(max < min) swap(&max, &min);
    unsigned int baseInt = max <= 0 ? randInt(0) : randIntB2in(min, max);
    return ((double) (baseInt == max) ? baseInt - 1 : baseInt) + randDouble();
}

char randChar(){
    return (char) randInt(126);
}

char randCharPrintable(bool alphanumericOnly){

    if(!alphanumericOnly) return (char) randIntB2in(33, 126);

    int type = randInt(2);
    switch (type){
        //Caracteres númericos
        case 0: return (char) randIntB2in(48, 57); break;

        //Caracteres alfabeticos maiusculos
        case 1: return (char) randIntB2in(65, 90); break;

        //Caracteres alfabeticos minusculos
        default: return (char) randIntB2in(97, 122); break;
    }
}

bool randBool(unsigned int toTrue, unsigned int toFalse){

    //Se as possibilidades forem a mesma, 50% para cada
    if(toTrue == toFalse) return randIntB2in(0, 1) == 1;

    if(toTrue == 0) return false;   //Se toTrue for 0, então sempre será false
    if(toFalse == 0) return true;   //Se toFasle for 0, então sempre será true

    //Calcula porporção e a chance para ambos valores
    return randIntB2in(1, 100) <= ((toTrue * 100)/(toTrue + toFalse));
}
