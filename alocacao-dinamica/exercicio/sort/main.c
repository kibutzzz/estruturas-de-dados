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
    int vet[10] = {5,8,456,7,64, 45, 123,84,12,389};

    printVet(vet, 10);

    bubbleSort(&vet, 10);

    printVet(vet, 10);

    return 0;
}
