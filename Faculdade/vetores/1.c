#include <stdio.h>
int main()
{
  int x[10],i;
  for (i=0;i <= 9; i++){
    x[i]=30;
  }
  for (i=0; i<= 9; i++){
    printf("x[%d]: %d\n",i,x[i]);
  }

  return 0;
}