#include<stdio.h>
int main(){
    int matriz[5][5], sum=0;

    // SOMA DA DIAGONAL SECUNDÁRIA
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("Digite um valor: ");
            scanf("%d",&matriz[i][j]);
            if(i + j == 4){
                sum += matriz[i][j];
            }
        }
    }
    printf("\n\nA soma eh de %d",sum);
}
