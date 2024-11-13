#include <stdio.h>
int main()
{
  int x, c;
  printf("Digite um numero inteiro entre 1 e 10: ");
  scanf("%d", &x);

  if (x >= 1 && x <= 10)
  {
    for(c = 10; c >= 1; c--)
    {
      printf("%d x %d = %d\n", x, c, x * c);
    }
  }
  else
  {
    printf("O valor deve estar entre 1 e 10.\n");
  }

  return 0;
}
