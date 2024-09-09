#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 50

int main(void) {

  float BIMESTRE1 [TAMANHO];
  int indice = 0;

  while(indice < TAMANHO){
    printf("ALUNO %i [0.0, 10.0]: ", indice + 1);
    scanf("%f", &BIMESTRE1[indice]);

    if(BIMESTRE1 [indice] < 0 || BIMESTRE1 [indice] > 10)
      printf("ERRO: Digitação. Escolha de novo.\n");
    else
      indice++;
  }
  
  return 0;
}