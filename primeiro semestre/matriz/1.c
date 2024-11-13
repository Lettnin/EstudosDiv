#include <stdio.h>
#include <stdlib.h>
int main()
{
  int min = 1;
  int max = 20;
  int X[5][5],l,c;
  int sml3=0,smc2=0,smdp=0,smds=0,smt=0;

  for (l=0; l<5; l++){
    for (c=0; c<5; c++){
      int randomnumber=min+rand()%(max-min+1); //PARA ESCREVER NUMEROS ALEATORIOS.
      X[l][c]=randomnumber;
      printf("%d\t", X[l][c]);
    }
    printf("\n");
  }

  for (l=0; l<5; l++){
    sml3+=X[2][l];
    smc2+=X[l][1];
    smdp+=X[l][l];
    smds+=X[l][4-l];
  }
  printf("A soma da linha 3 eh: %d\n", sml3);
  printf("A soma da coluna 2 eh: %d\n", smc2);
  printf("A soma da diagonal principal eh: %d\n", smdp);
  printf("A soma da diagonal segundaria eh: %d\n", smds);

  for (l=0; l<5; l++){
    for(c=0; c<5; c++){
      smt+=X[l][c];
    }
  }
  printf("A soma de todos os valores da matriz eh: %d\n", smt);
}