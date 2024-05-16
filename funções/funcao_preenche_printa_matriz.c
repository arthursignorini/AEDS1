#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void preencher (int linhas, int colunas, int matriz[linhas][colunas]) {
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++) {
           matriz[i][j] = rand () % 100;
        }
    }
}

void imprima(int linhas, int colunas, int matriz[linhas][colunas]) {
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++) {
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

}

void soma(int linhas, int colunas, int matriz1[linhas][colunas], int matriz2[linhas][colunas], int matriz3[linhas][colunas]) {
    for(int i=0; i<linhas; i++) {
        for(int j=0; j<colunas; j++){
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {

    int linhas,colunas;
    printf("Digite a quantidade de linhas: ");
    scanf("%d",&linhas);
    printf("Digite a quantidade de colunas: ");
    scanf("%d",&colunas);

    int matriz[linhas][colunas];

    preencher(linhas, colunas, matriz);
    imprima(linhas, colunas,matriz);

    int matriz1[linhas][colunas], matriz2[linhas][colunas], matriz3[linhas][colunas];
    printf("\n\n\n");
    printf("MATRIZ 1:\n");
    preencher(linhas,colunas,matriz1);
    imprima(linhas, colunas, matriz1);
    printf("\n\n");
    printf("MATRIZ 2:\n");
    preencher(linhas, colunas, matriz2);
    imprima(linhas, colunas, matriz2);
    soma(linhas, colunas, matriz1, matriz2, matriz3);
    printf("\n\n");
    printf("MATRIZ 3:\n");
    imprima(linhas, colunas, matriz3);

}


