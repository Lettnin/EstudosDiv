#include <stdio.h>
int main()
{
  int c[10],i;
  for(i=0; i < 10; i++){
    printf("Digite os valores: ");
    scanf("%d",&c[i]);
  }

  for (i=0; i < 10; i++){
    if (c[i] < 0)
    c[i] = 0;
  }

  for (i=0; i < 10; i++){
    printf("c[%d]: %d\n",i,c[i]);
  }

  return 0;
}