#include <stdio.h>

void troca(float *a, float *b){
    float aux;
    aux = *a;
    *a = *b;
    *b = aux;
    
}

int main()

{   float a = 2.5;
    float b = 3.5;
    troca(&a,&b);
    printf("Os valores de a %f e b %f sao: ", a,b);

    return 0;
}
