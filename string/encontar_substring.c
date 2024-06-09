#include<stdio.h>
#include<string.h>

int main()
{
    char frase[50];
    char frase2[50];

    printf("Digite a frase: ");
    fgets(frase, 50, stdin);
    frase[strcspn(frase, "\n")] = 0;
    printf("Digite outra frase: ");
    fgets(frase2, 50, stdin);
    frase2[strcspn(frase2, "\n")] = 0;

    if(strstr(frase, frase2) != NULL){
        printf("A substring %s esta presente na string", frase2);
    }
}
