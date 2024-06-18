#include<stdio.h>
#include<string.h>

int main()
{
    char palavra[15];
    fgets(palavra, 15, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    FILE *arquivo;
    arquivo = fopen("arquivo1.txt","w");
    fputs(palavra, arquivo);
    fclose(arquivo);


    FILE *arquivo2;
    char palavra2[30];
    fgets(palavra2, 15, stdin);
    arquivo2 = fopen("arquivo2.txt","w");
    fputs(palavra2,arquivo2);
    fclose(arquivo2);

    FILE *arquivo3;
    arquivo3 = fopen("arquivo3.txt","w");
    arquivo = fopen("arquivo1.txt","r");
    arquivo2 = fopen("arquivo2.txt","r");
    char frase1[15], frase2[30];
    fgets(frase1, 15,arquivo);
    fgets(frase2, 30, arquivo2);
    strcat(frase1, frase2);
    fputs(frase1,arquivo3);

}
