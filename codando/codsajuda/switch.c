#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
        int numerosecreto, palpite;
        int opcao;
        
        printf("Menu principal\n");
        printf("1. iniciar jogo\n");
        printf("2. ver regras\n");
        printf("3. sair\n");
        printf("escolha 1 opção:");
        scanf("%d", &opcao);
       
        switch (opcao)
       {
       case 1:
        srand(time(0));
        numerosecreto = rand() % 10;
        printf("digite um numero de 1 a 9: *");
        scanf("%d", palpite);
        if (numerosecreto == palpite)
        {
            printf("você acertou!"\n);
        }else{
            printf("Você errou!"\n);
        }
        
        printf("numero secredo %d\n", numerosecreto);
        break;
        case 2:
       printf("Regras");
        break;
        printf("Saindo do jogo, você sera sempre bem vindo\n");
        default:
        printf("Opção invalida\n");
       }









return 0;
}
