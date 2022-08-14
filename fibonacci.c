/******************************************************************************

Exercício: Escrever a função recursiva int fib(int n), que retorna o n-ésimo número da sequência de Fibonacci:
1, 1, 2, 3, 5, 8, 13, 21, 34, ...

fib(1) se n = 1
fib(2) se n = 2
fib( n ) = fib(n−2)+fib(n−1) se n>2

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int fibo(int n)
{
    
    if (n == 1)
        return 1;
     if(n == 2)
     
        return 2;
            else
            {
                return fibo(n-2) + fibo(n-1);
            }
            
} 

int main()
{   int i; 
    //fibo(6);
     for (i = 0; i < 6; i++)
        printf("\nA sequencia de Fibonacci eh: %d ",fibo(8));
        
    return 0;
