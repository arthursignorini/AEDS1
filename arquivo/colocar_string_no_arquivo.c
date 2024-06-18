#include<stdio.h>
#include<string.h>

int main()
{
    char palavra[15];
    fgets(palavra, 15, stdin);
    FILE *arquivo;
    arquivo = fopen("arquivo1.txt","w");
    fputs(palavra, arquivo);
    fclose(arquivo);

}
