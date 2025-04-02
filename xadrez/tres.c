#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){

        int i = 0;

        while (i <= 10)
        {
            if(i % 2 == 0){
                printf("O numero %d é par!\n", i);

            }
            i++;
        }
        
        return 0;
    }