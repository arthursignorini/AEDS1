#include <stdio.h>

int soma_digitos(int n) {
    int soma = 0;
    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }
    return soma;
}

int main() {
    int S, A, B;
    int menor = -1, maior = -1;

    scanf("%d",&S);
    scanf("%d",&A);
    scanf("%d",&B);

    for (int i = A; i <= B; i++) {
        if (soma_digitos(i) == S) {
            if (menor == -1) {
                menor = i;
            }
            maior = i;
        }
    }


    if (menor != -1 && maior != -1) {
        printf("%d\n", menor);
        printf("%d\n", maior);
}
}
