#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.*/

int ex8(void){
  char mes[9];
  float horas, valor, resultado;

  printf("Quanto você ganha por hora? ");
  scanf("%f",&valor);

  printf("Quantas horas você trabalhou este mês? ");
  scanf("%f",&horas);

  resultado = valor*horas;

  printf("Seu salário total é= %.2f", resultado);
  
}
