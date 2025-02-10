#include <stdio.h>

int main(){

int numero1 = 1, resultado;

printf("antes incremento: %d\n", numero1);

resultado = numero1++;
printf("pos-incremento - numero 1: %d - resultado %d\n", numero1, resultado);

resultado = ++numero1;
printf("pre-incremento - numero 1: %d - resultado %d\n", numero1, resultado);

resultado = numero1--;
printf("pos decremento - numero 1: %d - resultado %d\n", numero1, resultado);

resultado = --numero1;
printf("pre decremento - numero 1: %d - resultado %d\n", numero1, resultado);








}

