#include <stdio.h>
int main()
{
  int n1;
  printf("Digite um valor: ");
  scanf("%d",&n1);
    
  while (n1 != 0)
  {
    if (n1 > 0)
      printf("POSITIVO %d ",n1);
    else 
      printf("NEGATIVO %d ",n1);
      
    printf("\nDigite um novo valor: ");
    scanf("%d",&n1);
  }
  return 0;
}    












