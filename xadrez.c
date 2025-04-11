#include <stdio.h>

int main() {
    // =============================
    // Simulação da movimentação da TORRE
    // Utiliza: estrutura FOR
    // Movimento: 5 casas para a direita
    // =============================
    int i;
    printf("Movimento da Torre:\n");
    for(i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // =============================
    // Simulação da movimentação do BISPO
    // Utiliza: estrutura WHILE
    // Movimento: 5 casas na diagonal para cima e à direita
    // =============================
    int contadorBispo = 0;
    printf("Movimento do Bispo:\n");
    while(contadorBispo < 5) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // =============================
    // Simulação da movimentação da RAINHA
    // Utiliza: estrutura DO-WHILE
    // Movimento: 8 casas para a esquerda
    // =============================
    int contadorRainha = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while(contadorRainha < 8);

    return 0;
}

