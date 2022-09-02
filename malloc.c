#include <stdio.h>

#include <stdlib.h>

struct c{

int codigo;

char nome[100];

int telefone;

} typedef cliente;

cliente* criar(){

cliente *p = (cliente*)malloc(sizeof(cliente));

printf("\nInforme o codigo: nome: telefone:",p);

scanf("%i %s %i", &p->codigo, &p->nome,&p->telefone);

return p;

}

cliente* mostrar_cliente(cliente *p){

printf("\ncodigo:%i \nnome:%s \ntelefone: %i",&p->codigo,&p->nome,&p->telefone);

}

cliente* remove_cliente(cliente *p){

free(p);

}

int main()

{

cliente *p1 = criar();

mostrar_cliente(p1);

cliente *p2 = criar();

mostrar_cliente(p2);

remove_cliente(p1);

remove_cliente(p2);

return 0;
