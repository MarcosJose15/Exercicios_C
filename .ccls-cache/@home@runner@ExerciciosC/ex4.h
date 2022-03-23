#include <stdio.h>
#include <stdlib.h>
// Faça um Programa que peça as 4 notas bimestrais e mostre a média.
int ex4(void) {
  float n1, n2, n3, n4, media;

  printf("Digite Nota 1: ");
  scanf("%f", &n1);

  printf("Digite Nota 2: ");
  scanf("%f", &n2);

  printf("Digite Nota 3: ");
  scanf("%f", &n3);

  printf("Digite Nota 4: ");
  scanf("%f", &n4);

  media = (n1 + n2 + n3 + n4) / 4;

  printf("Média = %0.f", media);

  return 0;
}
