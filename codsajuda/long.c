#include <stdio.h>

int main() {
        int numero1 = 2147483647; // esse valor excede o limite padrao do int
        long int numero2 = 2147483647;

        printf("numero1: %d\n",  numero1);
        printf("numero2: %ld\n", numero2);



        return 0;

}