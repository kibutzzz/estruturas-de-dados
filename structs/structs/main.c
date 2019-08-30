#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    char nome[100];
    char rg[15];
    int matricula;
};

struct Endereco {
    char rua[100];
    int numero;
    char bairro[100];
    char cidade[100];
};


int main()
{
    struct Aluno alunos[3];
    struct Endereco enderecos[3];

    int j =0;
    for(int i = 0; i < 3; i ++) {
        j = i + 1;
        printf("Digite o nome do aluno %d: ", j);
        gets(alunos[i].nome);
        fflush(stdin);

        printf("Digite o rg do aluno %d: ", j);
        gets(alunos[i].rg);

        fflush(stdin);

        printf("Digite a matricula do aluno %d: ", j);
        scanf("%d", &alunos[i].matricula);
        fflush(stdin);

        printf("Digite o rua do aluno %d: ", j);
        gets(enderecos[i].rua);
        fflush(stdin);

        printf("Digite o numero do endereco aluno %d: ", j);
        scanf("%d", &enderecos[i].numero);
        fflush(stdin);

        printf("Digite o bairro do aluno %d: ", j);
        gets(enderecos[i].bairro);
        fflush(stdin);

        printf("Digite a cidade do aluno %d: ", j);
        gets(enderecos[i].cidade);
        fflush(stdin);

    }

    for(int i = 0; i < 3; i ++) {
        j = i + 1;
        printf("\n\naluno %d", j);
        printf("\nnome: %s ", alunos[i].nome);

        printf("\trg: %s", alunos[i].rg);

        printf("\tmatricula: %d", alunos[i].matricula);

        printf("\trua: %s", enderecos[i].rua);

        printf("\tnumero: %d", enderecos[i].numero);

        printf("\tbairro: %s ", enderecos[i].bairro);

        printf("\tcidade do aluno: %s ", enderecos[i].cidade);

    }

    return 0;
}
