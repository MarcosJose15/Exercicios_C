#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Fahrenheit.*/
int ex10(void){
  float F, C;

  printf("Digite a temperatura em graus Celsius: ");
  scanf("%f",&C);
  
  F = (1.8*C)+32;
  
  printf("Em Fahrenheit: %.2f",F);

  return 0;
}