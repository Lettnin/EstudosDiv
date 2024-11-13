#include <stdio.h>
int main()
{
  int c;
  for(c = 100; c <= 200 ; c++)
  {
    if (c % 2 == 1)
    printf("%d\n", c);
  }

return 0;
}