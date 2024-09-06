// Ler 2 matrizes, A 4 x 6 e B 4 x 6 e criar :
// a) uma matriz S que seja a soma de A e B.
// b) uma matriz D que seja a diferença de A e B. (A – B).
// // Escrever as matrizes S e D após todo cálculo estar concluído.

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int min = 1;
  int max = 20;
  int A[4][6], B[4][6], S[4][6], D[4][6];
  int l, c;
  int somaA=0,difB;

  for (l=0; l<4; l++){
    for (c=0; c<6; c++){
      int randomnumber=min+rand()%(max-min+1); //PARA ESCREVER NUMEROS ALEATORIOS.
      A[l][c]=randomnumber;
      printf("%d\t", A[l][c]);
    }
    printf("\n");
  }
  printf("\n");

  for (l=0; l<4; l++){
    for (c=0; c<6; c++){
      int randomnumber=min+rand()%(max-min+1); //PARA ESCREVER NUMEROS ALEATORIOS.
      B[l][c]=randomnumber;
      printf("%d\t", B[l][c]);
    }
    printf("\n");
  }
  printf("\n");

  for (l = 0; l < 4; l++) {
    for (c = 0; c < 6; c++) {
      S[l][c] = A[l][c] + B[l][c];
    }
  }
  for (l = 0; l < 4; l++) {
    for (c = 0; c < 6; c++) {
      D[l][c] = A[l][c] - B[l][c];
    }
  }

  printf("Matrix S (A + B):\n");
    for (l = 0; l < 4; l++) {
      for (c = 0; c < 6; c++) {
        printf("%d\t", S[l][c]);
      }
        printf("\n");
    }
    printf("\n");

  printf("Matrix D (A - B):\n");
    for (l = 0; l < 4; l++) {
      for (c = 0; c < 6; c++) {
        printf("%d\t", D[l][c]);
      }
        printf("\n");
    }


}