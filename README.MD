Biblioteca de dependências comuns para programas didáticos em C.

Edwino Stein - edwino.stein@gmail.com

Requesitos:

    Para a compilação, é necessário o compilador GCC com suporte a C11.

    OBS.: A ferramenta de compilação e a biblioteca foi desenvolvida e testa em
          ambientes UNIX, por esse motivo, é provável de que não funcione em
          sistemas operacionais Windows.

    A ferramenta de compilação e a biblioteca foram testados em:
        * Ubuntu 16.04 com GCC 5.3.1
        * Mac OS X 10.11 com Command Line Tools 7.3 (clang 703.0.31)

Inclue os itens:

    * Biblioteca padrão (stdio, stdlib, stdbool);
    * Módulo String;
    * Módulo Util;
    * Módulo StdOutput;
    * Módulo StdInput;
    * Módulo Console;
    * Módulo Random;

Como utilizar:

    1 - Crie seu programa C e inclua o arquivo "common/common.h";

    2 - Defina permissão de execução para a ferramenta de compilação:
        $ chmod +x tools/compiler

    3 - Utilize a ferramenta de compilação para a compilar seu programa:
        $ ./tool/compiler meu_prog1.c meu_prog2.c meu_prog3.c ...

    OBS.: O primeiro arquivo fonte dos parâmetros, deve ser o arquivo fonte
          principal do programa.

    OBS.: Os arquivos objetos e binarios serão gerados no diretório build/.
          Não é aconselhavel destribuir o projeto com esse diretório.
