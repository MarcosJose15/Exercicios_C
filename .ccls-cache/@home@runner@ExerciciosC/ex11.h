#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
a.o produto do dobro do primeiro com metade do segundo.
b.a soma do triplo do primeiro com o terceiro.
c.o terceiro elevado ao cubo.*/

int ex11(void){
    int n1, n2;
    float r1;

  printf("Insira n1= ");
  scanf("%d",&n1);

  printf("Insira n2= ");
  scanf("%d",&n2);

  printf("Insira r1= ");
  scanf("%f",&r1);

  printf("\n a = %d", (n1*2)*(n2/2));

  printf("\n b = %2.f", (n1*3)+r1);

  printf("\n c = %.2f", r1*r1*r1);

  
    
  return 0;  
}