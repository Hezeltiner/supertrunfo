#include <stdio.h>

int main(){
    int idade;

    float altura = 1.80;
    char opcao = 'S';

    
    
    
    printf("idade antes: %d\n", idade);
    printf("Entre com sua idade\n");
    scanf("%d", &idade);
    printf("idade depois: %d\n", idade);
    printf("Entre com a altura\n");
    scanf("%f", &altura);
    printf("sua altura é: %f\n", altura);
    printf("Entre com a opcao\n");
    scanf(" %c", &opcao);
    printf("A opção é: %c", opcao);
    
}