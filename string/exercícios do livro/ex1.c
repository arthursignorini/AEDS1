#include <stdio.h>
#include <string.h>

// Função para inverter uma string
void inverterString(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Função para verificar se um caractere é uma vogal
int ehVogal(char c) {
    char vogais[] = "AEIOUaeiou";
    for (int i = 0; i < strlen(vogais); i++) {
        if (c == vogais[i]) {
            return 1;
        }
    }
    return 0;
}

// Função para criptografar a frase
void criptografarFrase(char* frase) {
    // Inverter a frase
    inverterString(frase);

    // Substituir consoantes por #
    for (int i = 0; i < strlen(frase); i++) {
        char c = frase[i];
        // Verificar se o caractere é uma letra e não é uma vogal
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            if (!ehVogal(c)) {
                frase[i] = '#';
            }
        }
    }
}

int main() {
    char frase[100];

    // Solicitar a frase ao usuário
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Remover o caractere de nova linha do final da string, se existir
    frase[strcspn(frase, "\n")] = '\0';

    // Criptografar a frase
    criptografarFrase(frase);

    // Imprimir a frase criptografada
    printf("Frase criptografada: %s\n", frase);

    return 0;
}
