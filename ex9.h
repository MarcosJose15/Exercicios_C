#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius.
C = 5 * ((F-32) / 9).*/

int ex9(void){
  float C, F;

  printf("Digite a temperatura em Fahrenheit: ");
  scanf("%f",&F);

  C = C = 5 * ((F-32) / 9);

  printf("Em graus C : %.2f",C);

  return 0;
}