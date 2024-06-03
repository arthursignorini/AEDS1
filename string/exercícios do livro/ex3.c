#include<stdio.h>
#include<string.h>


int main()
{
    char frase[50];

    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);

    int cont = 0;
    int len = strlen (frase);

    for(int i=0; i<len; i++){
        if(frase[i] != ' '){
            frase[cont++] = frase[i];
        }
    }
    frase[cont] = '\0';

    puts(frase);


}
