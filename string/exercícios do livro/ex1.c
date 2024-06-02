#include <stdio.h>
#include <string.h>

int main() {
    char frase[100], frase_criptografada[100];
    int i, j, len;

    // Solicitar a frase ao usuário
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Remover o caractere de nova linha do final da frase
    frase[strcspn(frase, "\n")] = 0;

    // Obter o comprimento da frase
    len = strlen(frase);

    // Inverter a frase e substituir consoantes por '#'
    for (i = 0, j = len - 1; j >= 0; i++, j--) {
        char c = frase[j];
        if ((c >= 'B' && c <= 'D') || (c >= 'F' && c <= 'H') || (c >= 'J' && c <= 'N') ||
            (c >= 'P' && c <= 'T') || (c >= 'V' && c <= 'Z') ||
            (c >= 'b' && c <= 'd') || (c >= 'f' && c <= 'h') || (c >= 'j' && c <= 'n') ||
            (c >= 'p' && c <= 't') || (c >= 'v' && c <= 'z')) {
            frase_criptografada[i] = '#';
        } else {
            frase_criptografada[i] = c;
        }
    }
    frase_criptografada[len] = '\0'; // Adicionar o terminador de string

    // Exibir o resultado
    printf("Frase criptografada: %s\n", frase_criptografada);

    return 0;
}
