#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char frase[50];
    printf("Digite a frase: ");
    fgets(frase, 50, stdin);
    frase[strcspn(frase, "\n")] = 0;

    for(int i = 0; frase[i] != '\0'; i++) {
        frase[i] = toupper(frase[i]);
    }

    printf("A frase em maiusculas eh: %s\n", frase);
}
