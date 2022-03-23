#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
void ex6(void){
  float raio, area;
  float pi;

  pi = 3.14159265359;

  printf("\n Informe o raio da circunferência: ");
  scanf ("%f",&raio);

  area = pi * ( raio*raio);

  printf("\n A área é = %.2f",area);



  return 0;
}
