#include<stdio.h>
int main(){
    int matriz[3][5];
    int cont=0;

    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            printf("Digite um numero: ");
            scanf("%d",&matriz[i][j]);

            if(matriz[i][j] > 15 && matriz[i][j] < 20) {
                cont++;
            }
        }
    }
    printf("A quantidade de numeros entre 15 e 20 nessa matriz eh %d",cont);
}
