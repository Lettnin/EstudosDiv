
#include <stdio.h>
int main()
{
  int i,x[10],y[10];
  for (i=0; i<10; i++){
  printf("Digite um valor: ");
  scanf("%d", &x[i]);
  }

  for (i=0; i<10; i++){
    if (i%2 == 0){
     y[i] = x[i] * 2;
  }
  else {
    y[i] = x[i] * 3;
  }
  }
  printf("Vetor Y:\n");
  for (i = 0; i < 10; i++) {
    printf("Y[%d] = %d\n", i,y[i]);
  }
}