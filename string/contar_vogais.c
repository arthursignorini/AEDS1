#include<stdio.h>
#include<string.h>

int main()
{
    char frase[50];
    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);
    frase[strcspn(frase, "\n")] = 0;

    int cont = 0;
    int tam = strlen(frase);
    for(int i=0; i<tam; i++){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U' ){
            cont++;
        }
    }
    printf("Essa frase tem %d vogais",cont);
}
