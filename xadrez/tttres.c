#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){

        int numero, i;
        printf("Um numero para ser calculado na tabuada... \n");
        scanf("%d", &numero);


        for (i = 0; i <= 10; i++)
        {
            printf("%d x %d = %d \n", i, numero, i * numero);
        }
        
    
        
        return 0;
    }