#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58*/

int ex12(void){
  float altura, pesoi;

  printf("Sua altura: ");
  scanf("%f",&altura);

  pesoi = (72.7*altura) - 58;

  printf("Peso ideal = %.2f KG", pesoi);

  
}