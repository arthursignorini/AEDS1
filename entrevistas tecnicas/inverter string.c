#include <stdio.h>
#include <string.h>

#define TAM 100

int main() {
    char string[TAM];
    fgets(string, TAM, stdin);
    string[strcspn(string, "\n")] = 0; // Remove o caractere de nova linha

    int tam = strlen(string);
    char vet[tam + 1]; // +1 para o caractere nulo

    // Inicializa o índice j para o último caractere válido
    for(int i = 0, j = tam - 1; i < tam; i++, j--) {
        vet[j] = string[i];
    }
    vet[tam] = '\0'; // Adiciona o caractere nulo no final

    printf("%s\n", vet);
    return 0;
}
