#include <stdio.h>

int main() {
    // ===== Torre (5 casas para a Direita) - FOR =====
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ===== Bispo (5 casas na Diagonal Cima Direita) - WHILE =====
    int casasBispo = 5;
    int i = 0;
    printf("\nMovimento do Bispo (5 casas na Diagonal Cima Direita):\n");

    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // ===== Rainha (8 casas para a Esquerda) - DO-WHILE =====
    int casasRainha = 8;
    int j = 0;
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");

    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);

    // ===== Cavalo (2 casas para Baixo, 1 para Esquerda) - FOR + WHILE =====
    int casasBaixo = 2;
    int casasEsquerda = 1;
    int passo = 0;

    printf("\nMovimento do Cavalo (2 casas para Baixo, 1 para a Esquerda):\n");

    for (int k = 0; k < casasBaixo; k++) {
        printf("Baixo\n");  // Movimento vertical
        passo++;
    }

    // Movimento horizontal (1 passo para Esquerda)
    int mov = 0;
    while (mov < casasEsquerda) {
        printf("Esquerda\n");
        mov++;
    }

    return 0;
}