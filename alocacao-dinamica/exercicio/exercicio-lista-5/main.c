#include <stdio.h>
#include <stdlib.h>

struct Carro
{
    char modelo[30];
    char placa[10];
    char horarioEntrada[10];
};
void cadastraCarro(struct Carro *carros, int n)
{
    for(int i = 0; i < n; i ++)
    {
        system("CLS");
        printf("Cadastro do %d carro:\n", i + 1);

        printf("\nDigite a placa do carro: ");
        gets(carros[i].placa);
        fflush(stdin);

        printf("\nDigite o modelo do carro: ");
        gets(carros[i].modelo);
        fflush(stdin);

        printf("\nDigite o horario de entrada do carro: ");
        gets(carros[i].horarioEntrada);
        fflush(stdin);
    }
}

int main()
{
    struct Carro *carros = NULL;
    int n = 0;
    printf("Digite o numero de carros que deseja cadastrar: ");
    scanf("%d", &n);
    fflush(stdin);

    carros = malloc(sizeof(struct Carro) * n );
    if(carros == NULL ) {
        printf("Erro ao alocar a memoria");
        return 1;
    }
    cadastraCarro(carros, n);

    system("CLS");

    for(int i = 0; i < n; i ++)
    {
        printf("\nCarro %d (%p): Modelo(%p): %s, placa(%p): %s, Horario de entrada(%p): %s", i + 1, &carros[i], &carros[i].modelo, carros[i].modelo, &carros[i].placa, carros[i].placa, &carros[i].horarioEntrada, carros[i].horarioEntrada);

    }

    return 0;
}
