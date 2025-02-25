#include <stdio.h>
    int main(){
        float populacaoa;
        float populacaob;
        float PontosTuristicos;
        float areaa;
        float areab;
        float piba;
        float pibb;
        int poa, barretos, Araguainha, Bora;
        char nomea[50] = "portoalegre, barretos, araguainha, bora";
        char nomeb[50] = "portoalegre, barretos, araguainha, bora";
        float mediaa;
        float mediab;
        
        printf("Desafio super trunfo\n");
        
        printf("digite o nome da cidade\n");
        scanf("%s", nomea);
        
        printf("Coloque a população:\n");
        scanf("\n%f", &populacaoa);
        
        printf("Coloque a área:\n");
        scanf("\n%f", &areaa);
        
        printf("Insira o PIB:\n");
        scanf("\n%f", &piba);
        
        printf("insira a quantia de pontos turisticos\n");
        scanf("\n%f", &PontosTuristicos);
        
        mediaa = (populacaoa + areaa + piba + PontosTuristicos) / 4;
        printf("o poder é: %.2f\n", mediaa);
        
        printf("A densidade populacional é:%.2f\n", populacaoa / areaa);
        
        printf("o pib per capta é:%.2f\n", piba / populacaoa);
        
        printf("Digite o nome de outra cidade\n");
        scanf("%s", nomeb);
        
        printf("coloque a população:\n");
        scanf("\n%f", &populacaob);
        
        printf("Coloque a área:\n");
        scanf("\n%f", &areab);
        
        printf("Insira o PIB:\n");
        scanf("\n%f", &pibb);
        
        printf("insira a quantia de pontos turisticos\n");
        scanf("\n%f", &PontosTuristicos);
        
        mediab = (populacaob + areab + pibb + PontosTuristicos) / 4;
        printf("o poder é: %.2f\n", mediab);
        
        printf("A densidade populacional é:%.2f\n", populacaob / areab);
        
        printf("o pib per capta é:%.2f\n", pibb / populacaob);
        
        if(populacaoa > populacaob) {
            printf("jogador 1 com maior população\n", nomea);
        }else{
            printf("Jogador 2 com maior população", nomeb);
        }
        
        if(mediaa > mediab){
            printf("Jogador 1 tem poder superior ao jogador 2\n");
        }else{
            printf("Jogador 2 tem poder superior ao jogador 1");
        }
        
        
        if (populacaoa / areaa < populacaob / areab) {
            printf("densidade do jogador 1 menor");
        } else {
            printf("densidade do jogador 2 menor");
        }
        
        return 0;
}