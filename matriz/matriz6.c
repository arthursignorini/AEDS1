#include <stdio.h>

int main() {
    // Definindo a matriz 20x10
    int matriz[20][10];

    // Preenchendo a matriz com números inteiros
    printf("Preencha a matriz 20x10 com números inteiros:\n");
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calculando a soma de cada coluna e armazenando em um vetor
    int soma_colunas[10] = {0}; // Inicializando com 0s
    for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 20; i++) {
            soma_colunas[j] += matriz[i][j];
        }
    }

    // Multiplicando cada elemento da matriz pela soma da coluna correspondente
    printf("\nMatriz resultante:\n");
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] *= soma_colunas[j];
            printf("%5d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

