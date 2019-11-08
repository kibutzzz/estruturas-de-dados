#include <stdio.h>
#include <stdlib.h>

void printVet(int vet[], int n) {
    printf("\n");
    for(int i = 0; i < n; i ++) {
        printf("%d\t", vet[i]);
    }
}

void swap(int vet[], int i, int j) {
    int temp = vet[i];
    vet[i] = vet[j];
    vet[j] = temp;
}

void bubbleSort(int vet[], int n) {
    int swapped;
    do {
        swapped = 0;
        for(int i = 0; i < n - 1; i ++) {
            if(vet[i] >  vet[i + 1]) {
                swap(vet, i, i + 1);
                swapped = 1;
            }
        }
    } while(swapped == 1);
}

int main()
{

    int n = 0;
    int *pArr = NULL;
    printf("digite o numero de numeros que deseja ordenar: ");
    scanf("%d", &n);

    pArr = malloc(n * sizeof(int));
    if(pArr == NULL) {
        printf("Erro ao alocar a memoria");
        return 1;
    }
    for(int i = 0; i < n; i ++) {
        printf("\ndigite o %d numero: ", i + 1);
        scanf("%d", &pArr[i]);
    }

    system("CLS");

    printf("Vetor informado:");
    printVet(pArr, n);

    bubbleSort(pArr, n);

    printf("\n\nVetor ordenado: ");
    printVet(pArr, n);

    return 0;
}
