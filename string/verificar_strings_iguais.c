#include<stdio.h>
#include<string.h>
// STRING
// tem que colocar um tamanho a mais por causa do \0


int tam (char nome[])
{
    int cont=0;
    for(int i=0; i<50; i++){
        if(nome[i] != '\0'){
            cont++;
        } else {
            break;
        }
    }
    return cont;
}

int igual (char nome[], char sobrenome[])
{
    int cont=0;
    for(int i=0; i<50; i++){
        if(nome[i] != '\0'){
            cont++;
        } else {
            break;
        }
    }

    int cont2=0;
    for(int i=0; i<cont; i++){
        if(nome[i] == sobrenome[i]){
            cont2++;
        } else {
            return 0;
        }
    }
    if(cont == cont2){
        return 1;
    }
}


int main()
{
    char nome[50];
    char sobrenome[50];
    printf("Digite o seu nome: ");

    // scanf("%s",nome);
    // printf("%s",nome);

    gets(nome); //
    // puts(nome); // printa o nome completo

    // scanf("%[^\n]",nome);
    // printf("%s",nome);

    printf("Digite o sobrenome: ");
    gets(sobrenome);
    // puts(nome);



    if(tam(nome) == tam(sobrenome)){

        if(igual(nome,sobrenome) == 1){
            printf("\nSao iguais");
        } else {
            printf("\nNao sao iguais");
        }
    } else{
        printf("\nNao sao iguais");
    }
}
