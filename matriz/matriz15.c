#include<stdio.h>
#include<stdbool.h>
int main(){
    int x;

    printf("Digite o tamanho da matriz: ");
    scanf("%d",&x);

    int matriz[x][x];

    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
            printf("Digite o valor da linha %d coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

    bool identidade = true;
    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
            if((i==j && matriz[i][j]!= 1) && (i!=j && matriz[i][j]!=0)){
                identidade = false;
                break;
            }
        }
        if(!identidade){
            break;
        }
    }

    if(identidade){
        printf("Essa matriz eh uma matriz identidade");
    } else {
        printf("Essa matriz nao eh uma matriz identidade");
    }
}
