#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int opcao;
    float populacaoa;
    int populacaob;
    float PontosTuristicosa;
    int PontosTuristicosb;
    float areaa;
    int areab;
    float piba;
    int pibb;
    int poa, barretos, Araguainha, Bora;
    char nomea[50] = "poa, barretos, araguainha, bora";
    char nomeb[50] = "poa, barretos, araguainha, bora";
    float mediaa;
    float mediab;
    float pibpercaptaa;
    float pibpercaptab;
    float densidadea;
    float densidadeb;
    srand(time(0));
        
        printf("***Menu principal***\n");
        printf("1. Iniciar jogo\n");
        printf("2. Regras\n");
        printf("3. Sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Seja bem vindo ao desafio super trunfo\n");
         //ultilize numeros ate 1000
        printf("digite o nome da cidade (as cidades são: poa, bora, barretos, araguainha)\n");
        scanf("%s", nomea);
        
        printf("Coloque a população entre 1 e 1000:\n");
        scanf("\n%f", &populacaoa);
        
        printf("Coloque a área entre 1 e 1000:\n");
        scanf("\n%f", &areaa);
        
        printf("Insira o PIB entre 1 e 1000:\n");
        scanf("\n%f", &piba);
        
        printf("insira a quantia de pontos turisticos entre 1 e 30:\n");
        scanf("\n%f", &PontosTuristicosa);
        
        mediaa = (populacaoa + areaa + piba + PontosTuristicosa) / 4;
        printf("o poder é: %.2f\n", mediaa);
        
        densidadea = (populacaoa / areaa);
        printf("A densidade populacional é:%.2f\n", densidadea);
        
        pibpercaptaa = (piba / populacaoa);
        printf("o pib per capta é:%.2f\n", pibpercaptaa);
        
        printf("Digite o nome de outra cidade (as cidades são: poa, bora, barretos, araguainha)\n");
        scanf("%s", nomeb);
        
        srand(time(0));
        populacaob = rand() % 1000 + 1;
        printf("A população é:\n %d\n", populacaob);
        
        
        areab = rand() % 1000 + 1;
        printf("A areá é:\n %d\n", areab);
        
        
        pibb = rand() % 1000 + 1;
        printf("O pib é\n :%d\n", pibb);
        
        
        PontosTuristicosb = rand() % 30 + 1;
        printf("A quantia de pontos turisticos é:\n %d\n", PontosTuristicosb);
        
        mediab = (populacaob + areab + pibb + PontosTuristicosb) / 4;
        printf("o poder é:\n %f\n", mediab);
        
        densidadeb = (populacaob / areab);
        printf("A densidade populacional é:\n %.2f\n", densidadeb);
        
        pibpercaptab = (pibb / populacaob);
        printf("o pib per capta é:\n %.2f\n", pibpercaptab);
            if ((mediaa > mediab) && (densidadea > densidadeb) && (pibpercaptaa < pibpercaptab))
            {
                printf("1X2\n");
            }else if ((mediaa < mediab) && (densidadea < densidadeb) && (pibpercaptaa < pibpercaptab)){
                printf("1X2\n");
            }else if ((mediaa < mediab) && (densidadea > densidadeb) && (pibpercaptaa > pibpercaptab)){
                printf("1X2\n");
            }else if ((mediaa < mediab) && (densidadea < densidadeb) && (pibpercaptaa > pibpercaptab)){
                printf("2X1\n");
            }else if ((mediaa > mediab) && (densidadea > densidadeb) && (pibpercaptaa > pibpercaptab)){
                printf("2X1\n");
            }else if ((mediaa > mediab) && (densidadea < densidadeb) && (pibpercaptaa > pibpercaptab)){
                printf("2X1\n");
            }else if ((mediaa > mediab) && (densidadea < densidadeb) && (pibpercaptaa < pibpercaptab)){
                printf("2X1\n");
            }else if ((mediaa > mediab) && (densidadea < densidadeb) && (pibpercaptaa > pibpercaptab))
            {
                printf("3X0\n");
            }else if ((mediaa < mediab) && (densidadea > densidadeb) && (pibpercaptaa < pibpercaptab))
            {
                printf("0X3\n");
            }else if ((mediaa > mediab) && (densidadea > densidadeb) && (pibpercaptaa < pibpercaptab))
            {
                    printf("Empate\n");
            }else if ((mediaa == mediab) && (densidadea == densidadeb) && (pibpercaptaa == pibpercaptab)){
                    printf("Empate\n");
            }else if ((mediaa == mediab) && (densidadea == densidadeb) && (pibpercaptaa == pibpercaptab)){
                    printf("Empate\n");
            }else if((mediaa == mediab) && (densidadea == densidadeb) && (pibpercaptaa == pibpercaptab)){
                printf("Empate\n");
            }
            
            break;
        case 2:
            printf("Regras: O jogador com a maior pontuação vence menos no caso de densidade");
            break;
        case 3:
            printf("Ate mais, volte sempre!!");
            break;
        default:
        printf("opção invalida");
            break;
        }

    }

