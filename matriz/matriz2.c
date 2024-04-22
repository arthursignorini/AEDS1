#include<stdio.h>
int main(){
    int matriz[2][4], soma = 0,cont=0, contpar=0;
    float media;

    for (int i=0; i<2; i++){
        for (int j=0; j<4; j++){
            printf("Digite um valor para a linha %d coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    for (int i=0; i<2; i++){
        for (int j=0; j<4; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

    for (int i=0; i<2; i++){
        for (int j=0; j<4; j++){
            if(matriz[i][j] > 12 && matriz[i][j] < 20){
                cont++;
            }
        }
        printf("\nNa linha %d tem %d numeros que sao maiores que 12 e menores que 20",i,cont);
        cont = 0;
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            if(matriz[i][j] % 2 ==0){
                soma = soma + matriz[i][j];
                contpar++;
            }
        }
    }
    media = (float) soma / contpar;
    printf("\nA media eh %.2f",media);
}
