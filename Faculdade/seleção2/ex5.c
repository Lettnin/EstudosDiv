#include <stdio.h>

int main()
{
int n1,n2,n3;

  printf("Digite um valor: ");
  scanf("%d",&n1);
  printf("Digite um valor: ");
  scanf("%d",&n2);
  printf("Digite um valor: ");
  scanf("%d",&n3);

  if (n1 >= n2 && n1 >= n3)
    printf("%d eh o maior numero.",n1);

  else if (n2 >= n1 && n2 >= n3)
    printf("%d eh o maior numero.",n2);

  else 
   printf("%d eh o maior numero.",n3);

return 0;
}