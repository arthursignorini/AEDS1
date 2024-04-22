#include<stdio.h>
int main(){
    int m[4][6], n[6][4];

    printf("Matriz M: \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<6; j++){
            printf("Digite um valor para a posicao linha %d coluna %d: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }

    printf("\nMatriz N: \n");
    for(int i=0; i<6; i++){
        for(int j=0; j<4; j++){
            printf("Digite um valor para a posicao linha %d coluna %d: ",i,j);
            scanf("%d",&n[i][j]);
        }
    }

    //printar matrizes
    printf("\n\n\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<6; j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n");
    for(int i=0; i<6; i++){
        for(int j=0; j<4; j++){
            printf("%d\t",n[i][j]);
        }
        printf("\n");
    }



    //separar a soma da linha M
    int soma_linha=0;
    int linha[4];
    for(int i=0; i<4; i++){
        for(int j=0; j<6; j++){
            soma_linha = soma_linha + m[i][j];
        }
        linha[i] = soma_linha;
        soma_linha = 0;
    }
    // separar a soma da linha N
    int soma_coluna=0;
    int coluna[4];
    for(int j=0; j<4; j++){
        for(int i=0; i<6; i++){
            soma_coluna = soma_coluna + n[i][j];
        }
        coluna[j] = soma_coluna;
        soma_coluna =0;
    }

    // somando tudo
    int total;
    for(int i=0; i<4; i++){
        total = linha[i] + coluna[i];
        printf("\nA soma da linha %d da primeira matriz com a coluna %d da segunda matriz eh %d",i,i,total);
        total =0;
    }
}





