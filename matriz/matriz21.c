#include<stdio.h>
int main(){
    int matriz[5][5], maior;

        // MULTIPLIQUE A DIAGOLNAL PRINCIPAL PELO MAIOR VALOR DA MATRIZ
        maior = matriz[0][0];
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
              printf("Digite o valor da linha %d coluna %d: ",i,j);
              scanf("%d",&matriz[i][j]);
              if(matriz[i][j] > maior){
                maior = matriz[i][j];
              }
            }
        }
        printf("\n\nPRIMEIRA MATRIZ\n");
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
             printf("%d\t",matriz[i][j]);
            }
            printf("\n");
        }

        printf("\n\nSEGUNDA MATRIZ\n");
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                if (i == j) {
                    matriz[i][j] *= maior;
                }
                printf("%d\t",matriz[i][j]);
            }
            printf("\n");
        }

}
