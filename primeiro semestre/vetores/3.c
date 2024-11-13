#include <stdio.h>
int main()
{
  int x[10],i;
  for (i=0;i <= 9; i++){
    if (i %2 == 0){
    x[i] = 20;
    }
    else if (i %2 == 1){
    x[i] = 10;
    }
  }
  for (i=0;i <= 9; i++){
  printf("x[%d]: %d\n",i,x[i]);
  }
  return 0;
  
}