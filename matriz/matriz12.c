#include<stdio.h>
int main (){
    int m1[3][3],m2[3][3],m3[3][3];

    // SOMA DE MATRIZES
    printf("PRIMEIRA MATRIZ\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Digite um valor para a linha %d coluna %d: ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }

    printf("\n\nSEGUNDA MATRIZ\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Digite um valor para a linha %d coluna %d: ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t",m2[i][j]);
        }
        printf("\n");
    }

    printf("\n\nTERCEIRA MATRIZ\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           m3[i][j] = m1[i][j] + m2[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t",m3[i][j]);
        }
        printf("\n");
    }
}
