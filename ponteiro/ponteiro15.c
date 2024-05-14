#include<stdio.h>
#include<stdlib.h>

void troca(char *p) {
    while (*p != '\0') {
        if (*p == 'a') {
            *p = 'u';
        } else if (*p == 'e') {
            *p = 'o';
        } else if (*p == 'i') {
            *p = 'u';
        } else if (*p == 'o') {
            *p = 'a';
        }
        p++;
    }
}

int main() {
    char *p;

    p = (char*)malloc(100 * sizeof(char));

    printf("Digite uma frase: ");
    scanf("%99s", p);

    troca(p);

    printf("%s\n", p); // Imprime a string modificada

    free(p); // Libera a memória alocada
    return 0;
}

