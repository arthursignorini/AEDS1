#include <stdio.h>

int divisao(int num, int denominador) {
    if (num < denominador) {
        return 0;
    } else {
        return 1 + divisao(num - denominador, denominador);
    }
}

int main() {
    int num, denominador;
    printf("Numerador: ");
    scanf("%d", &num);
    printf("Denominador: ");
    scanf("%d", &denominador);

    // Verificação de divisão por zero
    if (denominador == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
    } else {
        printf("A divisão desses números é %d\n", divisao(num, denominador));
    }

    return 0;
}

