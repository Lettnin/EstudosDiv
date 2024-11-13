#include <stdio.h>
int main()
{
  int n1,n2;
  float div;

  printf("Digite um valor: ");
  scanf("%d", &n1);
  printf("Digite um valor: ");
  scanf("%d", &n2);

  while (n2 <= 0){
    printf("Digite um valor maior que 0: ");
    scanf("%d", &n2);
  }
    div = (n1 / n2);
    printf("O resultado da divisao eh:%2.f", div);

  return 0;
}
