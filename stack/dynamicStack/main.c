#include <stdio.h>
#include <stdlib.h>

/*Declaração do tipo nó para a pilha, composto de
ponteiro para o próximo nó e de um campo para dado
*/
typedef struct elemento {

       int dado;
       struct elemento *proximo;

       } elemento;

elemento *topo = NULL; //Ponteiro para o topo da pilha
elemento *alocar = NULL; //Ponteiro para fazer alocação

/*Inserção de elementos na pilha
Parâmetro dado: é um int */

int push(int dado) {

    alocar = malloc(sizeof(elemento)); //aloca memória

    if (alocar == NULL) { //Se não for possível fazer a alocação, sai do programa
       printf("push: Falta de memória\n");
       return -1;
    }

    alocar->dado = dado; //Copia o dado para o novo nó alocado

     if (topo == NULL) { //Se não houver elemento ainda na pilha, insere na base
         topo = alocar;
         topo->proximo = NULL;

     }
     else

     {
         alocar->proximo = topo; //Aponta o próximo para o "antigo" topo da pilha
         topo = alocar;          //Aponta o ponteiro de topo para o dado que foi alocado

     }
}

/*
Retira elementos da pilha
*/
int pop(int *removido) {

    if(topo){
        *removido = topo->dado;
        topo = topo->proximo;
        return 0;
    }
    else{
        printf("pop: Pilha vazia.\n");
        return -1;
    }

    }

/*Imprime todos os elementos da pilha na tela
na ordem de retirada
*/
int imprimir() {
     elemento *ponteiro = topo;

     if (ponteiro == NULL){
        printf("imprimir: Pilha vazia.\n");
        return -1;
     }

    printf("\nPilha:\n");

    while (ponteiro) {
           printf("dado: %d, end: %p\n", ponteiro->dado, &ponteiro->dado);
           ponteiro = ponteiro->proximo;
          }
     }

int main() {

    int dado;
    int rem = 0;
    int ret = 0;

    ret = pop(&rem); //Tenta remover dado da pilha vazia

    if(ret == 0){
        printf("\nmain:Saiu da pilha: %d\n", rem);
        imprimir();
    }

    printf("\nInserir: ");
    scanf("%d", &dado);
    push(dado);
    imprimir();

    printf("\nInserir: ");
    scanf("%d", &dado);
    push(dado);
    imprimir();

    ret = pop(&rem);

    if(ret == 0){
        printf("\nmain: Saiu da pilha: %d\n", rem);
        imprimir();
    }

    ret = pop(&rem);

    if(ret == 0){
        printf("\nmain: Saiu da pilha: %d\n", rem);
		imprimir();
    }

    printf("\nRetirar: ");

    ret = pop(&rem);

    if(ret == 0){
        printf("\nmain: Saiu da pilha: %d\n", rem);
		imprimir();
    }
  }




