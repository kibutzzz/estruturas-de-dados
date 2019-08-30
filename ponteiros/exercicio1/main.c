#include <stdio.h>
#include <stdlib.h>


int concat(char *str1, char *str2, char *result){
    int resultPos = 0;

    for(int i = 0; i < strlen(str1); i ++) {
        if (str1[i] == '\0') {
            break;
        }
        result[resultPos] = str1[i];
        resultPos ++;
    }

    for(int i = 0; i <  strlen(str2); i ++) {
        if(str2[i] == '\0') {
            break;
        }
        result[resultPos] = str2[i];
        resultPos ++;
    }
    result[resultPos] = '\0';
    return 0;
}

int main()
{
    char string1[100];
    char string2[100];
    char result[200];

    printf("Digite uma string!\n");
    gets(string1);

    fflush(stdin);

    printf("\nDigite outra string!\n");
    gets(string2);

    system("CLS");
    concat(string1, string2, result);
    printf("String concatenada: '%s'", result);


    return 0;
}
