#include <stdio.h>

// somap e i = acumuladores //
// pares++ e impar++ = contadores //

int main()
{
  int v,c,pares=0,impares=0;
  int somap=0,somai=0;

  for(c=1 ; c<=10; c++){
    printf("Digite um numero inteiro: ");
    scanf("%d",&v);

  if(v % 2 == 0)
  {
    somap = somap+v;
    pares++;
  }

  else 
  {
    somai = somai+v;
    impares++;
  }

  }
  printf("Pares: %d \n",pares);
  printf("Impares: %d\n ",impares);
  printf("soma dos pares: %d\n",somap);
  printf("soma dos impares: %d\n",somai);
return 0;
}
