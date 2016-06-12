/**
 *  Desenvolvido por Edwino Stein - edwino.stein@gmail.com
 */

#include "common/common.h"

int main(int argc, char *argv[]){

    String nome = newString(NULL);
    int numero = randInt(100);

    readF(nome, "Seu número é %d. Informe seu nome: ", numero);

    print("Olá ");
    print(nome);
    printLn(", este é um programa exemplo.");

    deleteString(nome);
    consolePause();
    return 0;
}
