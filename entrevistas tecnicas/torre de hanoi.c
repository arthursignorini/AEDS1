#include <stdio.h>
#include <math.h>

void hanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        printf("Mover disco 1 da torre %c para a torre %c\n", origem, destino);
        return;
    }
    hanoi(n - 1, origem, auxiliar, destino);
    printf("Mover disco %d da torre %c para a torre %c\n", n, origem, destino);
    hanoi(n - 1, auxiliar, destino, origem);
}

int main() {
    int n;
    printf("Digite um tamanho: ");
    scanf("%d", &n);
    printf("Solucao para o problema da Torre de Hanoi com %d discos:\n", n);

    // Calcular e mostrar o número de movimentos
    int movimentos = (int)pow(2, n) - 1;
    printf("Numero de movimentos necessarios: %d\n", movimentos);

    hanoi(n, 'A', 'C', 'B');
    return 0;
}
