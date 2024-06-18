#include<stdio.h>

typedef struct
{
    char nome[20];
    int codigo;
    char email[30];
    float salario;

} Colaborador;


void preencher (Colaborador colaborador[])
{
    for(int i=0; i<5; i++){
        printf("COLABORADOR %d\n",i+1);
        printf("Digite o nome do colaborador: ");
        scanf("%s",&colaborador[i].nome);
        printf("Digite o codigo desse colaborador: ");
        scanf("%d",&colaborador[i].codigo);
        printf("Digite o seu email: ");
        scanf("%s",&colaborador[i].email);
        printf("Digite o salario do colaborador: ");
        scanf("%f",&colaborador[i].salario);
        printf("\n");
    }
}

int main()
{
    Colaborador colaborador[5];
    preencher(colaborador);
    gravar(colaborador);
}
