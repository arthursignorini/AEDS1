#include<stdio.h>
int main(){
    int matriz[3][4], contpar=0,sumimp=0, soma=0;
    float media;

    //QUANTIDADE DE PARES, SOMA DOS IMPARES E MEDIA GERAL
     for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("Digite um valor: ");
            scanf("%d",&matriz[i][j]);
            soma += matriz[i][j];
            if(matriz[i][j] % 2 ==0){
                contpar++;
            } else {
                sumimp += matriz[i][j];
            }
        }
    }
    media = (float) soma / 12;
    printf("\n\nA matriz tem %d elementos pares, a soma dos impares eh %d e a media de todos eh %.2f",contpar,sumimp,media);
}
