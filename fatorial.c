#include <stdio.h>
#include <math.h>

int fatorial(int x) 
{ 
 if (x == 0)
        return 1;
    else
        return x * fatorial(x-1);
}

int main()
{   
    fatorial(10);
        printf("\n o resultado do fatorial de 5 eh: %d ",fatorial(6));
    return 0;
}