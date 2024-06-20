#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char frase[50];
    printf("Digite uma palavra: ");
    fgets(frase,50,stdin);
    frase[strcspn(frase, "\n")] = '\0';

    FILE *arquivo;

    int cont = 0;
    char letra[100];
    arquivo = fopen("questaoca.txt", "r");
    while(fgets(letra, 100,arquivo)!= NULL){
        if(strstr(letra, frase)!= NULL){
            cont = 1;
        }
    }

    if(cont == 1){
        printf("String encontrada");
    } else {
        printf("String nao encontrada");
    }

    fclose(arquivo);
}
