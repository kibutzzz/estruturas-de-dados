#include <stdio.h>
#include <stdlib.h>

struct Alimento {
    char tipo[20];
    char marca[30];
    char dataFabricacao[11];
    char dataValidade[11];
    int quantidadeEstoque;

};

int main()
{

    struct Alimento alimento;
    printf("alimento\n");

    printf("Digite o tipo do alimento: ");
    gets(alimento.tipo);
    fflush(stdin);

    printf("Digite a marca do alimento: ");
    gets(alimento.marca);
    fflush(stdin);

    printf("Digite a data de fabricacao do alimento: ");
    gets(alimento.dataFabricacao);
    fflush(stdin);

    printf("Digite a data de validade do alimento: ");
    gets(alimento.dataValidade);
    fflush(stdin);

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &alimento.quantidadeEstoque);
    fflush(stdin);

    system("CLS");
    printf("alimento:");

    printf("\nTipo: %s", alimento.tipo);

    printf("\nMarca: %s", alimento.marca);

    printf("\nData de fabricacao: %s", alimento.dataFabricacao);

    printf("\nData de validade: %s", alimento.dataValidade);

    printf("\nquantidade em estoque: %d", alimento.quantidadeEstoque);

    return 0;
}
