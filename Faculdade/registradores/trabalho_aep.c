#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Jogador {
    int cartas[5];
};

int main() {
    struct Jogador jogador1, jogador2;
    int i, sn, sc;
    int cartas[13][4] = {0}; 
    char *naipes[] = {"Copas", "Ouros", "Espadas", "Paus"};
    srand(time(NULL));
    for (i = 0; i < 5; i++) {
        do {
            sn = rand() % 4;   
            sc = rand() % 13;  
        } while (cartas[sc][sn] == 1);
         
        cartas[sc][sn] = 1;
        jogador1.cartas[i] = sc + 1;
        printf("Jogador 1 recebeu %d de %s\n", jogador1.cartas[i], naipes[sn]);
    }
    for (i = 0; i < 5; i++) {
        do {
            sn = rand() % 4;
            sc = rand() % 13;
        } while (cartas[sc][sn] == 1);

        cartas[sc][sn] = 1;
        jogador2.cartas[i] = sc + 1;
        printf("Jogador 2 recebeu %d de %s\n", jogador2.cartas[i], naipes[sn]);
    }
}