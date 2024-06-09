#include<stdio.h>
#include<string.h>

int verificar(char frase[], int i, int j, int *x) {
    if (frase[i] == frase[j]) {
        *x = 0;
    } else {
        *x = 1;
    }
    return *x;
}

int main() {
    int x = 1;
    char frase[50];
    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);
    frase[strcspn(frase, "\n")] = 0;

    int j = strlen(frase) - 1;
    for (int i = 0; i < j / 2; i++, j--) { // Use j/2 instead of j/3
        if (verificar(frase, i, j, &x) == 0) {

        } else {
            printf("Nao eh um palindromo");
            break;
        }
    }
    if (x == 0) {
        printf("A frase eh um palindromo");
    }

    return 0;
}
