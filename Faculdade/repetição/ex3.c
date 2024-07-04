//Faça um algoritmo para calcular o fatorial de um número.//
#include <stdio.h>
int main()
{
  int x,i,c;
  printf("Digite um numero inteiro: ");
  scanf("%d",&x);

  c=1;

  for(i=2; i<=x; i++)
  {
    c=c*i;
  }
  printf("A soma do fatorial eh: %d" , c);

  return 0;
}