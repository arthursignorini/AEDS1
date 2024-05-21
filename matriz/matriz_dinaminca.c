#include<stdio.h>
#include<stdlib.h>

void preencher(int **matriz, int linhas, int colunas)
{
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Digite um valor para matriz[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
}
void printar(int **matriz, int linhas, int colunas)
{
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int linhas, colunas;
    printf("Digite a quantidade de linhas: ");
    scanf("%d",&linhas);
    printf("Digite a quantidade de colunas: ");
    scanf("%d",&colunas);
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for(int i=0; i<linhas; i++){
        matriz[i] =  (int *)malloc(colunas * sizeof(int));
    }
    preencher(matriz,linhas,colunas);
    printar(matriz,linhas,colunas);
}
