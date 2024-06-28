#include <stdio.h>

int main() {
    int i, m, d, resultado;
    printf("Escreva sua idade em anos: ");
    scanf("%d", &i);
    printf("Escreva quantos meses: ");
    scanf("%d", &m);
    printf("Escreva quantos dias: ");
    scanf("%d", &d);

    resultado = i * 365 + m * 30 + d;

    printf("Essa e sua idade em dias: %d", resultado);

    return 0;
}
