#include <stdio.h>

int main(){
    
    int numero1, numero2;
    
    int soma, subtracao, multiplicacao, divisao;

    printf("entre com o numero 1:\n");
    scanf("%d", &numero1);
    printf("entre com o numero 2:\n");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    
    subtracao = numero1 - numero2; 
    
    multiplicacao = numero1 * numero2;
    
    divisao = numero1 / numero2;
    
    printf("A Soma é: %d\n", soma);
    printf("A subtraçao é: %d\n", subtracao);
    printf("A divisão é: %d\n", multiplicacao);
    printf("A Multiplicação é: %d\n", divisao);

}