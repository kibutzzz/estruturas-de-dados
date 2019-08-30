#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contaOcorrencias(char *txt, char c) {
    int ocorrencias = 0;
    for(int i = 0; i < strlen(txt); i ++) {

        if(txt[i] == '\n') break;
        if(txt[i] == c || txt[i] == (char) ((int) c) + 32) ocorrencias ++;
    }

    return ocorrencias;
}

int main()
{
    char texto[1000];
    printf("digite uma palavra!\n");
    gets(texto);

    system("CLS");

    for(int i = 65; i <= 90; i ++) {
        printf("\n(%d) - Letra %c aparece %d vezes", i,  i, contaOcorrencias(&texto, (char) i));
    }

    return 0;
}
