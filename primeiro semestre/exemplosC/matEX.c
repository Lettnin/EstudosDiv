#include <stdio.h>

int main() {
    int X[2][2];
    int i, j, r;

    //loop para repetir e armazenar os dados 
    for (i = 0; i < 2; i++) {
      for (j = 0; j < 2; j++) {
        printf("Digite o numero: ");
        scanf("%d", &r);
        X[i][j] = r;
      }
    }

    //loop para mostrar e repetir os numeros pedidos
    for (i = 0; i < 2; i++) {
      for (j = 0; j < 2; j++) {
        printf("%d ", X[i][j]);
      }
        printf("\n"); // Newline for each row
    }

    return 0;
}
