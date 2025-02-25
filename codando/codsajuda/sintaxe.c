#include <stdio.h>

int main(){

    int idade = 19;
    float altura = 1.85;
    char opcao = 'S';
    char nome[20] = "iago";
    printf ("Idade: %d\n",idade);
    printf ("Altura: %f\n", altura);
    printf ("Opção: %c\n", opcao);
    printf ("Nome: %s\n", nome);

    printf("idade antes: %d\n", idade);
    printf("Entre com sua idade\n");
    scanf("%d", &idade);
    printf("idade depois: %d\n", idade);
    printf("Entre com a altura\n");
    scanf("%f", &altura);
}