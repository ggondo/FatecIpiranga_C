#include <stdio.h>

int main()
{
   //int i, lista[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
   int i, limit[31];
     for (int i=0 ; i<31 ; i++){
    
        if( i % 2 == 0)
            {
            printf("\nEste numero: %d é par!",i);
             }
        else
           {
          printf("\nEste numero: %d é impar!",i);
            }
   }


    return 0;
}