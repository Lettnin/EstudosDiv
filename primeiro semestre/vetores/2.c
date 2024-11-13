#include <stdio.h>
int main()
{
  int x[10],i,somador=0;
  for (i=0;i <= 9; i++){
    somador+=10;
    x[i]=somador;
  }
  for (i=0;i <= 9; i++){
  printf("x[%d]: %d\n",i,x[i]);
  }
  
  return 0;
}
