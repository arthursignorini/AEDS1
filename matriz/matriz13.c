#include<stdio.h>
int main(){
    int x,y;

    // MATRIZ TRANSPOSTA
    printf("Digite o tamanho da linha: ");
    scanf("%d",&x);
    printf("Digite o tamanho da coluna: ");
    scanf("%d",&y);

    int m[x][y], m2[y][x];

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf("Digite um valor para a linha %d coluna %d: ",i,j);
            scanf("%d",&m[i][j]);

            m2[j][i] = m[i][j];
        }
    }
    printf("\n\nMATRIZ NORMAL\n\n");
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

    printf("\n\nMATRIZ TRANSPOSTA\n\n");
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            printf("%d\t",m2[i][j]);
        }
        printf("\n");
    }
}
