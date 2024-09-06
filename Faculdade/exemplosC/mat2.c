#include <stdio.h>
int main()
{
  int X[5][5],i,j;
  for (i=0; i < 5; i++){
    for (j=0; j < 5; j++){
      printf("%d", X[i][j] = i+j);
    }
   printf("\n");
  }
  

  return 0;
}
