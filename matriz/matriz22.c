#include<stdio.h>
int main(){
    int matriz[5][5],valor[5];

    //MULTIPLICA CADA LINHA PELO ELEMENTOS DA DIAGONAL PRINCIPAL DESSA LINHA
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("Digite um valor para linha %d coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

     printf("\n\nPRIMEIRA MATRIZ\n");
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
             printf("%d\t",matriz[i][j]);
            }
            printf("\n");
        }

        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                if(i==j){
                    valor[i] = matriz[i][j];
                }
            }
        }

    printf("\n\nSEGUNDA MATRIZ\n");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            matriz[i][j] *= valor[i];
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }
}
