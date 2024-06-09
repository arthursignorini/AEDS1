#include<stdio.h>
#include<string.h>

int main()
{
    char frase[50];
    char frase2[50];

    printf("Digite a frase: ");
    fgets(frase, 50, stdin);
    printf("Digite outra frase: ");
    fgets(frase2, 50, stdin);

    int x = strcmp(frase, frase2);
    if(x == 0){
        printf("Sao iguais");
    } else {
        printf("Nao sao iguais");
    }
}

