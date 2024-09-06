// Ler uma matriz D 5 x 5 (considere que não serão informados valores duplicados). A seguir ler um
// número X e escreva uma mensagem indicando se o valor de X existe ou NÃO na matriz.

#include <stdio.h>
int main()
{
  int D[5][5],i,j,x;
  for (i=0; i<5; i++){
    for (j=0; j<5; j++){
    printf("Digite o valor de X: ");
    scanf("%d", &D[i][j]);
    }
  }

  for (i=0; i<5; i++){
    for(j=0; j<5; j++){
      printf("[%d]", D[i][j]);
    }
    printf("\n");
  }

  printf("Digite o valor de X para verificar na matriz: ");
  scanf("%d", &x);

  
  int verificador = 0; // Variável para indicar se o valor foi encontrado
  for(i=0; i<5; i++){
    for(j=0; j<5; j++){
      if (x == D[i][j]){
        verificador = 1; // Se o valor for encontrado, atualiza a variável
      }
    }
  }

  if (verificador){
    printf("O valor de X %d existe na matriz.\n", x);
  } else {
    printf("O valor de X %d nao existe na matriz.\n", x);
  }
}