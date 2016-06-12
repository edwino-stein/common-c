/**
 *  Desenvolvido por Edwino Stein - edwino.stein@gmail.com
 */

#include "../common.h"

#if defined WIN32
	#include <windows.h>
#endif

void consoleClear(){
    #if defined WIN32
    	consoleCExec("cls");
    #else
        flushOutput();
        printf("\033c");
    #endif
}

void consolePause(){
    #if defined WIN32
    	flushOutput();
        consoleCExec("pause");
    #else
        printf("Pressione enter para continuar...");
        flushOutput();
        consoleCExec("read KEYPRESS");
    #endif
}

void consoleStrExec(String cmd){
    flushOutput();
    system(getCStr(cmd));
}

void consoleCExec(const char *cmd){
    flushOutput();
    system(cmd);
}

void consoleGotoXY(int x, int y){

    #if defined WIN32
    	COORD pos = {x, y};
        HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleCursorPosition(output, pos);
    #else
        flushOutput();
    	printf("\033[%d;%dH",y,x);
    #endif
}
