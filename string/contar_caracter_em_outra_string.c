#include<stdio.h>
#include<string.h>

int main()
{
    char frase[50];
    char letra;

    printf("Digite a frase: ");
    fgets(frase, 50, stdin);
    frase[strcspn(frase, "\n")] = 0;
    printf("Digite uma letra: ");
    scanf(" %c",&letra);

    int len = strlen(frase);
    int cont = 0;
    for(int i=0; i<len; i++){
        if(frase[i] == letra){
            cont++;
        }
    }
    printf("%d vezes",cont);
}


