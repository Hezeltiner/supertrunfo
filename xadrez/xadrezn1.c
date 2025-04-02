#include <stdio.h>

int main() {
    int casasTorre = 5; 
    int casasBispo = 5; 
    int casasRainha = 8;
    int opcao;
    printf("escolha 1 peça...\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. rainha\n");
    scanf("%d", &opcao);
    switch (opcao)
  {
  case 1:
  int casasTorre = 5; 
  printf("Torre:\n");
  for (int i = 0; i < casasTorre; i++) {
    printf("Direita\n");
  }
  break;

case 2:
  // Bispo
  int casasBispo = 5; 
  printf("Bispo:\n");
  for (int i = 0; i < casasBispo; i++) {
    printf("Cima, Direita\n");
  }
  break;
  case 3:
  // Rainha
  int casasRainha = 8; 
  printf("Rainha:\n");
  for (int i = 0; i < casasRainha; i++) {
    printf("Esquerda\n");
  }
  
  break;
  
  
  default:
  printf("Não valido...");
  break;
  }

  return 0;
}