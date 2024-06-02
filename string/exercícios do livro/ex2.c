#include <stdio.h>
#include <string.h>

int main() {
    char frase[200];
    char *palavra;

    // Solicitar a frase ao usuário
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Remover o caractere de nova linha do final da frase, se houver
    frase[strcspn(frase, "\n")] = 0;

    // Usar strtok para dividir a frase em palavras
    palavra = strtok(frase, " ");

    // Imprimir cada palavra em uma linha separada
    while (palavra != NULL) {
        printf("%s\n", palavra);
        palavra = strtok(NULL, " ");
    }

    return 0;
}
