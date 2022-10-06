#include <stdio.h>
    int *p;
    int antes = 1, agora = 1, soma=1; 
    int aux=1;//somente para impressao 
void fibonacci()                           
{                     
                 
  if((soma <*p)!=1)
  {
      return ; 
  }
  else   
      {   
     printf("%d+%d=",aux,soma); 
     aux=soma;                                 
      soma = antes + agora;                   
      antes = agora;                         
      agora = soma;   
      printf("%d\n",soma); //resultado
      fibonacci(); //recursividade               
      }                                       
  return ;                           
}                                         
 
int main(void)
{
int n;
 printf("\t\t\t\t \033[41m Serie de Fibonacci \n");
 printf("\033[40m Digite um numero:");
 scanf("%d", &n);
 p=&n;//ponteiro recebe o valor de N
 fibonacci();
 return 0;
}
