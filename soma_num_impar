#include <stdio.h>
#include <conio.h>
#include <math.h>

int soma_imp(int n)
{
    if (n == 0) 
        return 0;
            else 
     {
     if (n % 2 == 0)
        return soma_imp(n-1);
            else {
        return n + soma_imp(n-1);
    }
     }
}

int main()
{   
    soma_imp(10);
    
    printf("\no valor da soma dos 10 primeiros numeros impares e: %d", soma_imp(10));

    return 0;
}
