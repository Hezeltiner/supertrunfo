#include <stdio.h>

void recusivo(int numero) {

    if (numero > 0)
    {
        printf("%d\n", numero);
        recusivo(numero - 1);
    }
    
}

int main(){
    int quantidade = 10;
    
    printf("contagem regressiva: \n");
    recusivo(quantidade);
    
    return 0;

}