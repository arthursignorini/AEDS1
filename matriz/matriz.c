#include<stdio.h>
int main(){
    int x,y,soma_linha=0,soma_digpri=0,soma_digsec=0,soma=0;

    printf("Digite a quantidade de linhas: ");
    scanf("%d",&x);
    printf("Digite a quantidade de colunas: ");
    scanf("%d",&y);

    int matriz[x][y];

    // formando a matriz

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf("Digite um numero para a linha %d coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    for(int i=0; i<x; i++){
        printf("Conteudo da linha %d: ",i);
        for(int j=0; j<y; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    // soma das linhas

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            soma_linha = soma_linha + matriz[i][j];
        }
        printf("A soma da linha %d eh %d\n",i,soma_linha);
        soma_linha=0;
    }

    // soma da diagonal principal
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            if(i == j){
                soma_digpri = soma_digpri + matriz[i][j];
            }
        }
    }
    printf("\nA soma da diagonal principal eh %d",soma_digpri);

    // A soma da diagonal secundária
    for(int i=0; i>x; i++){
        for(int j=0; j>y; j++){
            if((i+j) == (x-1)){
               soma_digsec = soma_digsec + matriz[i][j];
            }
        }
        printf("\nA soma da diagonal secundaria eh %d",soma_digsec);
    }

}



