// Ler um vetor Z de 10 elementos. Crie um vetor W, com todos os elementos de Z (na ordem
// inversa).Escrever o vetor W.

#include <stdio.h>
int main()
{
  int Z[10],W[10],i;
  for (i=0; i<10; i++){
    printf("Digite um valor: ");
    scanf("%d", &Z[i]);
  }
  for (i=0; i<10; i++){
    W[i] = Z[9-i];
  }
  for (i=0; i<10; i++){
    printf("Z [%d]: %d  W  [%d]: %d\n", i,Z[i],i,W[i]);
  }
}
