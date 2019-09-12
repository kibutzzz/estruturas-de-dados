#include <stdio.h>
#include <stdlib.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Alimento {
    char tipo[20];
    char marca[30];
    struct Data fabricacao;
    struct Data validade;
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
    scanf("%02d/%02d/%04d", &alimento.fabricacao.dia, &alimento.fabricacao.mes, &alimento.fabricacao.ano);

    printf("Digite a data de validade do alimento: ");
    scanf("%02d/%02d/%04d", &alimento.validade.dia, &alimento.validade.mes, &alimento.validade.ano);

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &alimento.quantidadeEstoque);
    fflush(stdin);

    system("CLS");
    printf("alimento:");

    printf("\nTipo: %s", alimento.tipo);

    printf("\nMarca: %s", alimento.marca);

    printf("\nData de fabricacao: %02d/%02d/%04d", alimento.fabricacao.dia, alimento.fabricacao.mes, alimento.fabricacao.ano);

    printf("\nData de validade: %02d/%02d/%04d", alimento.validade.dia, alimento.validade.mes, alimento.validade.ano);

    printf("\nquantidade em estoque: %d", alimento.quantidadeEstoque);

    return 0;
}
