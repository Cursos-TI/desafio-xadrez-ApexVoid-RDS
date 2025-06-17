#include <stdio.h>

// ===== Função Recursiva para a Torre =====
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// ===== Função Recursiva para a Rainha =====
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// ===== Função Recursiva para o Bispo =====
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casasRestantes - 1);
}

// ===== Função com Loops Aninhados para o Bispo (vertical + horizontal) =====
void moverBispoComLoops(int casas) {
    printf("Movimento do Bispo com loops aninhados:\n");
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }
}

// ===== Movimento do Cavalo (duas casas para cima, uma para a direita) =====
// Usando loops aninhados, múltiplas variáveis e break/continue
void moverCavalo() {
    printf("Movimento do Cavalo (2 casas para Cima, 1 para Direita):\n");
    int direcaoVertical = 2;
    int direcaoHorizontal = 1;

    for (int i = 0; i < 3; i++) {  // loop de controle externo (pode ser genérico)
        int passosVerticais = 0;

        while (passosVerticais < direcaoVertical) {
            if (passosVerticais == 1) {
                passosVerticais++;
                continue; // simula um atraso entre os passos, apenas para exemplo
            }
            printf("Cima\n");
            passosVerticais++;
        }

        for (int j = 0; j < direcaoHorizontal; j++) {
            printf("Direita\n");
            break; // usamos break para mostrar que o cavalo só se move uma vez para a direita
        }

        break; // garante apenas uma execução do movimento em "L"
    }
}

int main() {
    // ===== TORRE =====
    printf("Movimento da Torre (5 casas para Direita):\n");
    moverTorre(5);

    // ===== BISPO (Recursivo) =====
    printf("\nMovimento do Bispo Recursivo (5 casas na Diagonal Cima Direita):\n");
    moverBispoRecursivo(5);

    // ===== BISPO (Loops Aninhados) =====
    printf("\n");
    moverBispoComLoops(5);

    // ===== RAINHA =====
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(8);

    // ===== CAVALO =====
    printf("\n");
    moverCavalo();

    return 0;
}