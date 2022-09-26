#include <stdio.h>

#include <stdlib.h>

//TAD Conta Bancária

struct p {

int conta;

int agencia;

char nome[100];

float saldo;

struct p *proximo;

} typedef contaban;

//TAD fila

struct {

contaban *primeiro;

} typedef fila;

//Coloca na fila

void colocanafila(fila *f){

contaban *novo = (contaban*)malloc(sizeof(contaban));

printf("\ninsira o numero da conta:");

scanf("%i", &novo->conta);

printf("\ninsira o numero da agencia:");

scanf("%i", &novo->agencia);

printf("\ninsira o nome:");

scanf("%s", &novo->nome);

printf("\nO saldo e:");

scanf("%f", &novo->saldo);

novo->proximo=NULL;

if(f->primeiro == NULL){

f->primeiro = novo;

} else {

contaban *aux = f->primeiro;

while(aux->proximo != NULL){

aux = aux->proximo;

}

aux->proximo = novo;

}

printf("\nNOVA CONTA %x \n", novo);

}

//Mostra a fila

void mostrafila(fila *f){

if(f->primeiro == NULL){

printf("\nFILA ESTA VAZIA !!!");

} else {

printf("\nend=%x conta=%i agencia=%i nome=%s saldo=%f", f->primeiro,

f->primeiro->conta, f->primeiro->agencia,f->primeiro->nome,f->primeiro->saldo);

}

}

//Remove da fila

void tiradafila(fila *f){

if(f->primeiro == NULL){

printf("\nFILA ESTA VAZIA !!!");

} else {

printf("\nREMOVENDO end=%x conta=%i agencia=%i nome=%s saldo=%f", f->primeiro,

f->primeiro->conta, f->primeiro->agencia,f->primeiro->nome,f->primeiro->saldo);

contaban *aux = f->primeiro->proximo;

free(f->primeiro);

f->primeiro = aux ;

}

}

// Valida fila vazia ou não

void filavazia(fila *f){

if(f->primeiro == NULL){

printf("\nFILA ESTA VAZIA !!!");

} else{

printf("\nESTE REGISTRO AINDA CONSTA NA BASE: end=%x conta=%i agencia=%i nome=%s saldo=%f", f->primeiro,

f->primeiro->conta, f->primeiro->agencia,f->primeiro->nome,f->primeiro->saldo);

}

}

int main()

{

fila f1 = {NULL};

colocanafila(&f1);

colocanafila(&f1);

mostrafila(&f1);

colocanafila(&f1);

mostrafila(&f1);

tiradafila(&f1);

mostrafila(&f1);

tiradafila(&f1);

mostrafila(&f1);

tiradafila(&f1);

filavazia(&f1);

return 0;

}
