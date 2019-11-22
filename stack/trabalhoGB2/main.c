#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 10


typedef struct RegistroVisita
{
    char nome [50];
    char rg [15];
    char hora [30];
} RegistroVisita;

int topo = 0;
RegistroVisita registros[MAX];

char nomeArquivo[100];
FILE *ponteiroArquivo = NULL;

int empilhar( RegistroVisita novoRegistro)
{
    if(topo >= MAX)
    {
        printf("\nPILHA CHEIA!\n");
        return -1;
    }

    registros[topo] = novoRegistro;

    topo ++;
    return 0;

}

int desempilhar()
{
    if(topo <= 0)
    {
        printf("\nPILHA VAZIA!\n");
        return -1;
    }
    return --topo;
}

void mostrarPilha()
{
    for(int i = 0; i < topo; i++)
    {
        printf("\n#%d \n\nNome: %s\nRG: %s\nHora de entrada: %s",
               i + 1, registros[i].nome, registros[i].rg, registros[i].hora);
    }
    printf("\n\n");
}


int salvarPilha()
{
    if((ponteiroArquivo = fopen(nomeArquivo, "a")) == NULL)
    {
        return -1;
    }
    int indiceRegistro = -1;
    while((indiceRegistro = desempilhar()) != -1)
    {
        char dadosRegistro[255];
        sprintf(dadosRegistro, "\n\nNome: %s\nRG: %s\nHora de entrada: %s", registros[indiceRegistro].nome, registros[indiceRegistro].rg, registros[indiceRegistro].hora);

        fputs(dadosRegistro, ponteiroArquivo);
    }
    fclose(ponteiroArquivo);
    return 0;

}

int main()
{
    strcpy(nomeArquivo, "visitas.txt");

    int opcao = 0;

    do
    {

        printf("\nOpcoes: \n");
        printf("\n1) Cadastrar novo visitante");
        printf("\n2) Mostrar visitantes");
        printf("\n3) Imprimir relatorio no arquivo");

        printf("\n0) sair");

        printf("\n\nDigite a sua opcao: ");
        scanf("%d", &opcao);

        fflush(stdin);

        system("CLS");

        if(opcao == 1)
        {
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
            strcpy(novoRegistro.hora, ctime(&rawtime));


            empilhar(novoRegistro);

        }
        else if(opcao == 2)
        {
            mostrarPilha();
        }
        else if(opcao == 3)
        {
            //imprimir
            salvarPilha();
        }
        else
        {
            printf("Opcao %d Invalida", opcao);
        }

    }
    while(opcao != 0);

    system("CLS");

    return 0;
}
