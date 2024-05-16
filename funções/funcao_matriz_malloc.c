#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void preencher (int linhas, int colunas, int **matriz) {
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            matriz[i][j] = rand()%100;
        }
    }
}

void imprima (int linhas, int colunas, int **matriz) {
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int linhas,colunas;
    printf("Digite a quantidade de linhas: ");
    scanf("%d",&linhas);
    printf("Digite a quantidade de colunas: ");
    scanf("%d",&colunas);
    srand(time(NULL));
    int  **matriz = (int**)malloc(linhas * sizeof(int *));
    for(int i=0; i<linhas; i++){
        matriz[i] = (int *)malloc(colunas*sizeof(int));
    }
    preencher(linhas,colunas,matriz);
    imprima(linhas,colunas,matriz);
}
