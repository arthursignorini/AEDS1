#include<stdio.h>
#include<string.h>

typedef struct
{
    char nome[50];
    int mat;
} Aluno;

void imprime(Aluno a)
{
    printf("%s\n",a.nome);
    printf("%d",a.mat);
}

int main(){
    Aluno a;
    strcpy(a.nome, "Arthur");
    a.mat = 100;
    imprime(a);
}
