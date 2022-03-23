#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

int ex7(void){

  float lado, area;

  printf("Insira um lado do quadrado: ");
  scanf ("%f",&lado);

  area = lado*lado;


  printf ("\n area do quadrado = %.f", area);


  return 0;
}