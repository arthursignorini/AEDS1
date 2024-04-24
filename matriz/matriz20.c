#include<stdio.h>
int main(){

    // FAZ A MEDIA DAS LINHAS PARES
    int matriz[8][6], sum=0,cont=0;
    float media;

    for(int i=0; i<8; i++){
        for(int j=0; j<6; j++){
            printf("Digite o valor da linha %d coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

     for(int i=0; i<8; i++){
            if(i % 2 == 0){
        for(int j=0; j<6; j++){
                sum += matriz[i][j];
                cont++;
            }
        }
    }

    media = (float) sum / cont;
    printf("A media das linhas pares eh %.2f",media);
}
