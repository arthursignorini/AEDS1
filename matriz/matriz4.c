#include<stdio.h>
int main(){
    int matriz[15][5],sum=0,soma[15];
    char nomes[15][50];
    float media;

    for(int i=0; i<15; i++){
        for(int j=0; j<5; j++){
            printf("Digite um valor para a linha %d coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    for(int i = 0; i < 15; i++) {
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", nomes[i]);
    }

     for(int i=0; i<15; i++){
        for(int j=0; j<5; j++){
            sum = sum + matriz[i][j];
        }
        soma[i] = sum;
        sum =0;
    }

    for(int i=0; i<15; i++){
        media = (float)soma[i] / 5;
        printf("O aluno %s ficou com media de %.2f pontos",nomes[i],media);
    }

}
