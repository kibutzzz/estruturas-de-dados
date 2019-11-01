#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *pArq;

    char text[100] = "";

    printf("Digite alguma coisa: \n");
    gets(text);
    fflush(stdin);

    int textSize = strlen(text);

    printf("%d", textSize);

    if((pArq = fopen("teste.txt", "w+")) == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    fwrite(&text, sizeof(char), textSize, pArq);
    return 0;
}
