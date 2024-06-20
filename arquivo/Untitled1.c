#include<stdio.h>
#include<string.h>

int main()
{
    char frase[50];
    fgets(frase,50, stdin);

    FILE *arquivo;
    arquivo = fopen("questao.txt", "w");
    fputs(frase, arquivo);
    fclose(arquivo);


    int cont = 0;
    char letra;
    arquivo = fopen("questao.txt", "r");
    while(!feof(arquivo)){
        letra = fgetc(arquivo);
        if(letra == 'a' || letra == 'A'){
            cont++;
        }
    }
    fclose(arquivo);
    printf("Essa string tem %d letras A",cont);

}
