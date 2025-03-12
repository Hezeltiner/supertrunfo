#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
        int escolhajogador, escolhacomputador;
        srand(time(0));
        
        printf("Menu principal\n");
        printf("1. pedra\n");
        printf("2. papel\n");
        printf("3. tesoura\n");
        printf("escolha:");
        scanf("%d", &escolhajogador);
        
        escolhacomputador = rand() % 3 + 1;

        switch (escolhajogador)
        {
        case 1:
            printf("jogador: pedra -");
            break;
        case 2:
            printf("jogador: papel -");
            break;
        case 3:
            printf("jogador: tesoura -");
            break;
        default:
        printf("opção invalida");
            break;
        }
        
        switch (escolhacomputador)
        {
        case 1:
            printf("computador: pedra \n");
            break;
        case 2:
            printf("computador: papel\n");
            break;
        case 3:
            printf("computador: tesoura\n");
            break;
        default:
        printf("opção invalida");
            break;
        }

        if (escolhacomputador == escolhajogador)
        {
            printf("empate\n");
        }else if ((escolhajogador == 1) && (escolhacomputador == 3 )   ||
                    (escolhajogador == 2) && (escolhacomputador == 1)  ||
                    (escolhajogador == 3) && (escolhacomputador == 2))
        {
            printf("Você ganhou!");
        }else{
            printf("Você perdeu!");
        }
        
        
return 0;
}