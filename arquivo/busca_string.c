#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    int x;
    scanf("%d", &x);
    getchar();

    char palavra[15];
    fgets(palavra, 15, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    char vet[x][50];
    for(int i = 0; i < x; i++){
        fgets(vet[i], 50, stdin);
        vet[i][strcspn(vet[i], "\n")] = '\0';
    }

    // Converte a palavra e as strings para minúsculas para evitar distinção entre maiúsculas e minúsculas
    for(int i = 0; i < x; i++){
        for(int j = 0; vet[i][j] != '\0'; j++){
            vet[i][j] = tolower(vet[i][j]);
        }
    }
    for(int i = 0; palavra[i] != '\0'; i++){
        palavra[i] = tolower(palavra[i]);
    }

    int contador = 0;
    // Verifica se a palavra chave está em cada string
    for (int i = 0; i < x; i++) {
        if (strstr(vet[i], palavra) != NULL) {
            contador++;
        }
    }

    printf("%d", contador);

    return 0;
}
