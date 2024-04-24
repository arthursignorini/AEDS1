#include<stdio.h>
int main(){
    int matriz[2][3];
    int cont=0;

    // ver quantos numeros da matriz sao maiores que 5 e menores que 15
    for(int i=0; i<2; i++){
        for(int j=0; j<3;j++ ){
            printf("Digite o valor da linha %d coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j] > 5 && matriz[i][j] < 15) {
                cont++;
            }
        }
    }

    printf("Essa matriz tem %d numeros que estao entre 5 e 15",cont);

}
