#include<stdio.h>
#include<string.h>

int main()
{
    char frase[50];
    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);
    frase[strcspn(frase, "\n")] = 0;

    char invertida[50];

    int aux, j=strlen(frase);
    for(int i=0; i<j; i++, j--){
        aux = frase[i];
        frase[i] = frase[j-1];
        frase[j-1] = aux;
    }

    printf("A frase invertida eh: %s",frase);
}
