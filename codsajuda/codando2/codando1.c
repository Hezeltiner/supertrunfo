#include <stdio.h>
    int main(){
        float populacaoa;
        float populacaob;
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
        scanf("\n%f", &populacaoa);
        printf("Coloque a área:\n");
        scanf("\n%f", &area);
        printf("Insira o PIB:\n");
        scanf("\n%f", &pib);
        printf("insira a quantia de pontos turisticos\n");
        scanf("\n%f", &PontosTuristicos);
        media = (populacaoa + area + pib + PontosTuristicos) / 4;
        printf("o poder é: %.2f\n", media);
        printf("A densidade populacional é:%.2f\n", populacaoa / area);
        
        printf("Digite o nome de outra cidade\n");
        scanf("%s", nome);
        printf("coloque a população:\n");
        scanf("\n%f", &populacaob);
        printf("Coloque a área:\n");
        scanf("\n%f", &area);
        printf("Insira o PIB:\n");
        scanf("\n%f", &pib);
        printf("insira a quantia de pontos turisticos\n");
        scanf("\n%f", &PontosTuristicos);
        media = (populacaob + area + pib + PontosTuristicos) / 4;
        printf("o poder é: %.2f\n", media);
        printf("A densidade populacional é:%.2f\n", populacaob / area);
        printf("a população A é maior?(1 sim, 0 nã0):%d\n", populacaoa > populacaob);
        printf("comparaçao de poder se A for maior que B aparecera 1: %d\n", populacaoa > populacaob);

    return 0;
}