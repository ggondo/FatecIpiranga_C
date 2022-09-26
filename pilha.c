*******************************************************************************/

#include <stdio.h>

#include <stdlib.h>

struct caixa{

float peso;

int codigo;

struct caixa *proximo;

} typedef caixa;

struct p {

caixa *topo;

} typedef pilha;

void mostrar(pilha *p){

if(p->topo==NULL){

printf("\npilha vazia!");

} else{

printf("\n%x, p->topo");

printf("\npeso=%f", p->topo->peso);

printf("\ncodigo=%i", p->topo->codigo);

//printf("\nvalor=%i", p->topo->valor);

printf("\nproximo=%x", p->topo->proximo);

}

}

void push(pilha *p){

caixa *novo = (caixa*)malloc(sizeof(caixa));

printf("informe o peso:");

scanf("%f", &novo->peso);

printf("informe o codigo:");

scanf("%i", &novo->codigo);

novo->proximo = NULL;

if(p->topo==NULL){

p->topo = novo;

}else{

novo->proximo= p->topo;

p->topo = novo;

}

}

void pop(pilha *p){

if(p->topo==NULL){

printf("\nPILHA VAZIA");

} else {

printf("\nREMOVENDO TOPO %x", p->topo);

caixa *aux = p->topo->proximo;

free(p->topo);

}

}

int main()

{

pilha p1 = {NULL};

mostrar(&p1);

push(&p1);

mostrar(&p1);

push(&p1);

mostrar(&p1);

push(&p1);

mostrar(&p1);

pop(&p1);

mostrar(&p1);
