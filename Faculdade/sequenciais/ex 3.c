#include <stdio.h>

int main() {
    float te, b, n, v, pb, pn, pv;
    printf("Escreva numero total de eleitores: ");
    scanf("%f", &te);
    printf("Escreva numero total de votos em branco: ");
    scanf("%f", &b);
    printf("Escreva numero total de votos nulos: ");
    scanf("%f", &n);
    printf("Escreva numero total de votos validos: ");
    scanf("%f", &v);

    pb = (b / te) * 100;
    pn = (n / te) * 100;
    pv = (v / te) * 100;

    printf("Percentual do numero de votos brancos: %.2f%% \n", pb);
    printf("Percentual do numero de votos nulos: %.2f%%\n ", pn);
    printf("Percentual do numero de votos validos: %.2f%% ", pv);

    return 0;
}
