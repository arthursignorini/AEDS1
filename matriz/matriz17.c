#include<stdio.h>
int main(){
    int matriz[5][5], coluna[5],linha[5],soma=0, i;

    //CALCULAR A SOMA POR LINHA E A SOMA POR COLUNA EM VETORES DIFERENTES
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("Digite o valor da linha %d e coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
            soma += matriz[i][j];
        }
        linha[i] = soma;
        soma =0;
    }
    soma =0;
    for(int j=0; j<5; j++){
        for(int i=0; i<5; i++){
            soma += matriz[i][j];
        }
        coluna[j] = soma;
        soma =0;
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<5; i++){
        printf("\n\nA soma da linha %d eh %d e da coluna %d eh de %d",i,linha[i],i,coluna[i]);
    }
}
