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
        float pibpercaptaa;
        float pibpercaptab;
        float densidadea;
        float densidadeb;
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
        
        densidadea = (populacaoa / areaa);
        printf("A densidade populacional é:%.2f\n", densidadea);
        
        pibpercaptaa = (piba / populacaoa);
        printf("o pib per capta é:%.2f\n", pibpercaptaa);
        
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
        
        densidadeb = (populacaob / areab);
        printf("A densidade populacional é:%.2f\n", densidadeb);
        
        pibpercaptab = (pibb / populacaob);
        printf("o pib per capta é:%.2f\n", pibpercaptab);
    
        if(densidadea < densidadeb){
            printf("1x0");
            if(mediaa > mediab){
                printf("2X0");
            }else printf("0x1");

        }else{
            printf("0X2");
        }



    return 0;
    }