// Ler uma matriz A 12 x 13 e divida todos os 13 elementos de cada uma das 12 linhas de A pelo valor
// do maior elemento daquela linha. Escrever a matriz A modificada.
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int min = 1;
  int max = 20;
  int X[12][13],l,c,m,t;

  for (l=0; l<12; l++){
    for (c=0; c<13; c++){
      int randomnumber=min+rand()%(max-min+1); //PARA ESCREVER NUMEROS ALEATORIOS.
      X[l][c]=randomnumber;
      printf("%d\t", X[l][c]);
    }
    printf("\n");
  }
  printf("\n----------------------\n");

  for (l=0; l<12; l++){
    for(c=0; c<13; c++){
      if (c == 0){
      m = X[l][c];
      }
      if (X[l][c]>m)
      m = X[l][c];
    }
  }
   for(c=0; c<13; c++){
      for(l=0; l<12; l++){
      t=X[l][c];
      X[l][c]=t/m;
      }
    }
    for(c=0; c<13; c++){
      for(l=0; l<12; l++){
        printf("%d\t", X[l][c]);
      }
      printf("\n");
    }
}
