#include <stdio.h>

int main () {
    //Mover a torre 5 casas para a direita
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); //Imprime a direção do movimento.
    }

    //Mover o bispo 5 casas na diagonal cima e direita.
    int b = 1;
    while (b <= 5) {
        printf("Cima direita\n");
        b++;
    }

    //Mover a rainha 8 casas para a esquerda.
    int r = 1;
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= 8);

    return 0;
}
