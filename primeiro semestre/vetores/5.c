#include <stdio.h>
int main()
{
  int i,D[10],E[10];
  for(i=0; i < 10; i++){
    printf("Digite um valor: ");
    scanf("%d",&D[i]);
  }
  for(i=0; i < 10; i++){
    E[i] = D[i];
  }

  for(i=0; i < 10; i++){
    printf("D [%d]: %d  E  [%d]: %d\n", i,D[i],i,E[i]);
  }
  return 0;
}