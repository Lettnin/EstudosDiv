#include <stdio.h>

int main()
{
    double x, y, soma, media;

    while (1) {
        // Solicita a primeira nota
        printf("Digite a primeira nota: ");
        scanf("%lf", &x);
        // Verifica se a primeira nota é inválida
        if (x < 0 || x > 10) {
            printf("Nota invalida! Digite uma nota entre 0 e 10.\n");
            continue;  // Recomeça o loop
        }

        // Solicita a segunda nota
        printf("Digite a segunda nota: ");
        scanf("%lf", &y);
        // Verifica se a segunda nota é inválida
        if (y < 0 || y > 10) {
            printf("Nota invalida! Digite uma nota entre 0 e 10.\n");
            continue;  // Recomeça o loop
        }

        // Calcula a soma e a média
        soma = x + y;
        media = soma / 2;

        // Exibe a média semestral
        printf("Media semestral: %.2lf\n", media);
        
        // Você pode decidir se quer continuar solicitando notas ou encerrar o programa
        // Aqui, vou encerrar o programa após calcular a média
        break;
    }

    return 0;
}
