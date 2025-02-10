#include <stdio.h>

int main(){

    int idade, matricula;
    float altura;
    char nome[150];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    
    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("digite o nome do aluno: %s - matricula: %d ", nome, matricula);
    printf("idade %d - altura: %f", idade, altura);



}