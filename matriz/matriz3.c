#include<stdio.h>
int main(){
    int matriz[6][3];
    int maior,menor;

    for(int i=0; i<6; i++){
        for(int j=0; j<3; j++){
            printf("Digite um valor para a linha %d coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    // printar a matriz
    for(int i=0; i<6; i++){
        for(int j=0; j<3; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

    // achar o maior
    maior = matriz[0][0];
    int linha=0, coluna=0;
    for(int i=0; i<6; i++){
        for(int j=0; j<3; j++){
            if(matriz[i][j] >= maior){
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }
    printf("\nO maior numero eh %d e ele esta na linha %d e coluna %d",maior,linha,coluna);

    //achar o menor
    for(int i=0; i<6; i++){
        for(int j=0; j<3; j++){
            if(matriz[i][j] < maior){
                menor = matriz[i][j];
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }
    printf("\n menor numero eh %d e ele esta na linha %d e coluna %d",menor,linha,coluna);
}
