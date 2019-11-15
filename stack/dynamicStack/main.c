#include <stdio.h>
#include <stdlib.h>

/*Declara��o do tipo n� para a pilha, composto de
ponteiro para o pr�ximo n� e de um campo para dado
*/
typedef struct elemento {

       int dado;
       struct elemento *proximo;

       } elemento;

elemento *topo = NULL; //Ponteiro para o topo da pilha
elemento *alocar = NULL; //Ponteiro para fazer aloca��o

/*Inser��o de elementos na pilha
Par�metro dado: � um int */

int push(int dado) {

    alocar = malloc(sizeof(elemento)); //aloca mem�ria

    if (alocar == NULL) { //Se n�o for poss�vel fazer a aloca��o, sai do programa
       printf("push: Falta de mem�ria\n");
       return -1;
    }

    alocar->dado = dado; //Copia o dado para o novo n� alocado

     if (topo == NULL) { //Se n�o houver elemento ainda na pilha, insere na base
         topo = alocar;
         topo->proximo = NULL;

     }
     else

     {
         alocar->proximo = topo; //Aponta o pr�ximo para o "antigo" topo da pilha
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




