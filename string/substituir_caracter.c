#include<stdio.h>
#include<string.h>

int main()
{
    char frase[50];
    char letra;
    char letra2;

    printf("Digite a frase: ");
    fgets(frase, 50, stdin);
    frase[strcspn(frase, "\n")] = 0;
    printf("Digite uma letra que voce quer substituir: ");
    scanf(" %c",&letra);
    printf("Digite a letra que ficara no lugar: ");
    scanf(" %c",&letra2);

    int len = strlen(frase);
    for(int i=0; i<len; i++){
        if(frase[i] == letra){
            frase[i] = letra2;
        }
    }
    printf("A frase nova eh: %s",frase);
}
