#include <stdio.h>

 int main(){

    float populacao;
    float PontosTuristicos;
    float area;
    float pib;
    int poa, barretos, Araguainha, Bora;
    char nome[50] = "portoalegre, barretos, araguainha, bora";
    float media;

    printf("Desafio super trunfo\n");
    printf("digite o nome da cidade\n");
    scanf("%s", nome);
    printf("Coloque a população:\n");
    scanf("\n%f", &populacao);
    printf("Coloque a área:\n");
    scanf("\n%f", &area);
    printf("Insira o PIB:\n");
    scanf("\n%f", &pib);
    printf("insira a quantia de pontos turisticos\n");
    scanf("\n%f", &PontosTuristicos);
    media = (populacao + area + pib+ PontosTuristicos) / 4;
    printf("a media é: %.2f", media);

return 0;
 }