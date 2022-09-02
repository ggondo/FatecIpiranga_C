#include <stdio.h>

struct c{

int conta;

char nome[100];

float saldo;

float valorCred;

float valorDeb;

} typedef cliente;

void deposito(cliente *c){

printf("\nDigite o valor a ser depositado em R$:");

scanf("%f",&c->valorCred);

c->saldo = (c->saldo + c->valorCred);

}

void saque(cliente *c){

printf("\nDigite o valor a ser sacado em R$:");

scanf("%f",&c->valorDeb);

c->saldo = (c->saldo - c->valorDeb);

}

void imprimirSaldo(cliente *c){

printf("\n********************************");

printf("\nconta: %i ", c->conta);

printf("\nnome: %s ", c->nome);

printf("\nsaldo: %f ", c->saldo);

printf("\n********************************");

}

int main()

{

cliente c1 = {110,"joao", 0.0, 0.0, 0.0};

deposito(&c1);

printf("\nO valor depositado foi: %f", c1.valorCred);

saque(&c1);

printf("\nO valor debitado foi: %f", c1.valorDeb);

imprimirSaldo(&c1);

return 0;
