#include<stdio.h>
int main(){

    // MEDIA DA DIAGONAL PRINCIPAL
    int matriz[10][10], soma=0;
    float media;

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            printf("Digite um valor: ");
            scanf("%d",&matriz[i][j]);
            if(i==j){
                soma += matriz[i][j];
            }
        }
    }
    media = (float) soma / 10;
    printf("\n\nA media da diagonal principal eh de %.2f",media);
}
