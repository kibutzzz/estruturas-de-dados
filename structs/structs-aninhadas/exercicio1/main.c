#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data {
    int dia;
    int mes;
    int ano;
};

struct aluno {
    char nome[100];
    char matricula[10];
    struct data nascimento;
};

int main()
{

    struct aluno aluno;
    strcpy(aluno.nome, "Pedrinho");
    strcpy(aluno.matricula, "2HR237");
    aluno.nascimento.dia = 7;
    aluno.nascimento.mes = 4;
    aluno.nascimento.ano = 1987;

    printf("Aluno: %s, (matricula %s), Nasceu no dia %02d de %02d de %04d\n", aluno.nome, aluno.matricula, aluno.nascimento.dia, aluno.nascimento.mes, aluno.nascimento.ano);
    return 0;
}
