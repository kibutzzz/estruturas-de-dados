#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10


typedef struct RegistroVisita {
    char nome [50];
    char rg [15];
    char hora [30];
} RegistroVisita;

int topo = 0;

RegistroVisita registros[MAX];


int empilhar( RegistroVisita novoRegistro) {
    if(topo >= MAX) {
        printf("\nPILHA CHEIA!\n");
        return -1;
    }

    registros[topo] = novoRegistro;

    topo ++;
    return 0;

}

int desempilhar() {
    if(topo <= 0) {
        printf("\nPILHA VAZIA!\n");
        return -1;
    }

    topo --;
    return 0;
}

void mostrarPilha() {
    for(int i = 0; i < topo; i++) {
        printf("\n%d", i);
    }
}

int main()
{
    int opcao = 0;

    do {

        printf("\nOpcoes: \n");
        printf("\n1) Cadastrar novo visitante");
        printf("\n2) Mostrar visitantes");
        printf("\n3) Imprimir relatório no arquivo");

        printf("\n0) sair");

        printf("\n\nDigite a sua opcao: ");
        scanf("%d", &opcao);

        system("CLS");

        if(opcao == 1) {
            //cadastrar
            RegistroVisita novoRegistro;

            printf("Digite o nome do visitante: ");
            gets(novoRegistro.nome);
            fflush(stdin);

            printf("Digite o RG do visitante: ");
            gets(novoRegistro.rg);
            fflush(stdin);

            time_t rawtime;
            time (&rawtime);
            novoRegistro.hora = ctime (&rawtime);


            empilhar(novoRegistro);

        }

        if(opcao == 2) {
            //mostrar
        }

        if(opcao == 3) {
            //imprimir
        }

    } while(opcao != 0);

    printf("\n");
    return 0;
}
