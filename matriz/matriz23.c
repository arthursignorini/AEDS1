#include<stdio.h>
int main(){
    int matriz[7][10],soma=0;

    //ARMAZENE A SOMA DAS COLUNAS NA LINHA 7
    for(int i=0; i<6; i++){
        for(int j=0; j<10; j++){
            printf("Digite um valor: ");
            scanf("%d",&matriz[i][j]);
        }
    }

     for(int i=0; i<6; i++){
        for(int j=0; j<10; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

    for(int j=0; j<10; j++){
            soma =0;
        for(int i=0; i<6; i++){
            soma += matriz[i][j];
        }
        matriz[6][j] = soma;
    }

     for(int i=0; i<7; i++){
        for(int j=0; j<10; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

}
