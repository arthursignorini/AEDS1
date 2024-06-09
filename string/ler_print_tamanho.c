#include<stdio.h>
#include<string.h>


int main()
{
    char frase[50];
    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);
    int tam = strlen(frase);
    printf("O tamanho eh %d",tam);
}
