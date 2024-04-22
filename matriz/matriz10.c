#include<stdio.h>
int main() {
    int matriz[5][5];

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("Digite o valor da linha %d e coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    //printar a matriz
     for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

    // somar linha 4
    int soma4=0;
    for(int j=0; j<5; j++){
        soma4 += matriz[4][j];
    }

    //somar coluna 2
    int soma2 =0;
    for(int i=0; i<5; i++){
        soma2 += matriz[i][2];
    }

    // somar diagonal principal, secundaria e total
    int dp=0;
    int ds=0;
    int total =0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            total += matriz[i][j];
            if(i==j){
                dp += matriz[i][j];
            }
            if(i+j == 4){
                ds+=matriz[i][j];
            }
        }
    }

   printf("\n\nA soma da linha 4 eh %d\nA soma da coluna 2 eh %d\nA soma da principal eh %d\nA soma da secundaria eh %d\nA soma total eh %d",soma4,soma2,dp,ds,total);
}
