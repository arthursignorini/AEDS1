#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool anagrama(char palavra1[], char palavra2[])
{
    bool fim = true;
    int tam1 = strlen(palavra1);
    int tam2 = strlen(palavra2);
    char temp;

    if(tam1 == tam2) {
        for(int i=0; i<tam1-1;i++){
            for(int j=0; j<tam1-1-i; j++){
                if(palavra1[j] > palavra1[j+1]){
                    temp = palavra1[j+1];
                    palavra1[j+1] = palavra1[j];
                    palavra1[j] = temp;
                }
            }
        }
         for(int i=0; i<tam2-1;i++){
            for(int j=0; j<tam2-1-i; j++){
                if(palavra2[j] > palavra2[j+1]){
                    temp = palavra2[j+1];
                    palavra2[j+1] = palavra2[j];
                    palavra2[j] = temp;
                }
            }
        }
        for(int i=0; i<tam1; i++){
            if(palavra1[i] != palavra2[i]){
                fim = false;
            }
        }
    } else {
        fim = false;
    }
    return fim;
}

int main()
{
    char palavra1[20];
    char palavra2[20];

    printf("Digite a primeira palavra: ");
    fgets(palavra1, 20, stdin);
    printf("Digite a segunda palavra: ");
    fgets(palavra2, 20, stdin);

    bool result = anagrama(palavra1, palavra2);
    if(result == true) {
        printf("As palavras sao um anagrama");
    } else {
        printf("As palavras nao sao um anagrama");
    }
}
