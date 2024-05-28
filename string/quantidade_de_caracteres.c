#include<stdio.h>
#include<string.h>
// STRING
// tem que colocar um tamanho a mais por causa do \0


int tam (char nome[])
{
    int cont = 0;
    for(int i=0; i<50; i++){
        if(nome[i] != '\0'){
            cont++;
        } else {
            break;
        }
    }
    return cont;
}


int main()
{
    char nome[50];
    printf("Digite o seu nome: ");

    // scanf("%s",nome);
    // printf("%s",nome);

    gets(nome); //
    puts(nome); // printa o nome completo

    // scanf("%[^\n]",nome);
    // printf("%s",nome);

    int result = tam(nome);
    printf("Essa string tem %d caracteres",result);

}
