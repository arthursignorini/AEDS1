#include<stdio.h>
int main(){
    int matriz[4][5], vetor[5],sum=0,valor;

    //COLOCAR A SOMA DAS COLUNAS NO VETOR E PRINTAR OS VALORES MAIORES QUE 10
     for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            printf("Digite um valor: ");
            scanf("%d",&matriz[i][j]);
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

     for(int j=0; j<5; j++){
            sum=0;
            valor=0;
        for(int i=0; i<4; i++){
          sum += matriz[i][j];
          valor = sum;
        }
        vetor[j] = valor;
    }

    for(int i=0; i<5; i++){
        if(vetor[i] > 10){
        printf("\n\n%d",vetor[i]);
        }
    }
}
