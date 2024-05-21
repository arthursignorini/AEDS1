#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool eh_primo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Sub-rotina para encontrar e imprimir os três primeiros números primos acima de 100
void mostrar_primos() {
    int count = 0;
    int num = 101; // Inicia com o primeiro número acima de 100

    while (count < 3) {
        if (eh_primo(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
}

int main() {
    printf("Os três primeiros números primos acima de 100 são: ");
    mostrar_primos();
    return 0;
}
