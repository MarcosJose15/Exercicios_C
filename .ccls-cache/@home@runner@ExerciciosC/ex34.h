#include <stdio.h>
//Faça um Programa que peça dois números e imprima a soma.
int ex4(void) {
  int numero1, numero2;

  printf("Digite um número: ");
  scanf ("%d",&numero1);

  printf("Digite um segundo número: ");
  scanf ("%d",&numero2);


  printf("A soma é =  %d", numero1+numero2);

  return 0;
  }