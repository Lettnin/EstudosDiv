#include <stdio.h>
int main()
{
  int c,v;
  printf("Digite um valor: ");
  scanf("%d", &v);

  for(c = 1; c <= 10; c++)
  {
    printf("%d\n", v*c);
  }

return 0;
}