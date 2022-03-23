#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
Para homens: (72.7*h) - 58
Para mulheres: (62.1*h) - 44.7*/
int ex13(void){
  float altura, pesoi;
  int sexo;

  printf("Sua altura = ");
  scanf("%f",&altura);
  
  printf("Selecione o seu sexo: 1 = Homem / 2 = Mulher: ");
  scanf("%d",&sexo);

  if (sexo=1){
    pesoi = (72.7*altura) - 58;
    printf("Peso ideal = %.2f",pesoi);
  }
  else{
    pesoi = (62.1*altura) - 44.7;
    printf("Peso ideal = %.2f",pesoi);
  }
  
  
}