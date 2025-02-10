#include <stdio.h>

int main(){

    float nota1, nota2, nota3;
    float media;

    printf("*** programa de cálculo de media***\n");
    
    printf("Digite sua primeira nota:\n");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota:\n");
    scanf("%f", &nota2);
    
    printf("Digite sua terceira nota:\n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("a media e: %.2f", media);
    



    return 0;
}