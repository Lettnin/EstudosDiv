// 5.Ler uma matriz G 5 x 5 e criar 2 vetores SL e SC de 5 elementos que contenham respectivamente as somas das linhas e das colunas de G. Escrever os vetores criados.
#include <stdio.h>
int main()
{
  int i,j,X[5][5];
  int v1,v2,sl[5]={0},sc[5]={0};
  int min = 1;
  int max = 10;

  for (i=0; i<5; i++){
    for(j=0; j<5; j++){
      int randomnumber=min+rand()%(max-min+1);
      X[i][j]=randomnumber;
      printf("%d\t", X[i][j]);
    }
    printf("\n");
  }

  for(i=0; i<5; i++){
    for(j=0; j<5; j++){
      sc[j] += X[i][j];
      sl[i] += X[i][j];
    }
  } 
  for(i=0; i<5; i++){
  printf("%d\n", sl[i]);}

  printf("\n");

  for(i=0; i<5; i++){
  printf("%d\n", sc[i]);}
}