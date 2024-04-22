#include<stdio.h>
int main(){
    int matriz[3][3], x;

    printf("Digite um valor: ");
    scanf("%d",&x);

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Digite um valor para a linha %d coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
            matriz[i][j] = matriz[i][j] * x;
        }
    }

     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }


}
