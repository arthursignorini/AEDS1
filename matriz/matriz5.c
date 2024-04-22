#include<stdio.h>
int main(){
    int matriz[12][4],soma=0,vetormes[12];
    char nomes[12][50];

    for(int i=0; i<12; i++){
        for(int j=0; j<4; j++){
            printf("Digite um valor para a linha %d coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("\n");

    for(int i=0; i<12; i++){
        for(int j=0; j<4; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<12; i++){
        for(int j=0; j<4; j++){
            soma = soma + matriz[i][j];
        }
        vetormes[i] = soma;
        soma =0;
    }
    printf("\n");
    for(int i = 0; i < 12; i++) {
        printf("Digite o nome do mes %d: ", i+1);
        scanf("%s", nomes[i]);
    }

    for(int i=0; i<12; i++){
        printf("\nNo mes de %s teve um total de vendas de %d reais\n",nomes[i],vetormes[i]);
    }

    for(int i=0;i<12;i++){
        for(int j=0; j<4;j++){
            printf("\nNa semana %d de %s teve um total de vendas de %d reais",j,nomes[i],matriz[i][j]);
        }
        printf("\n");
    }
    soma =0;
    for(int i=0; i<12; i++){
        for(int j=0; j<4; j++){
            soma = soma + matriz[i][j];
        }
    }
    printf("\n\nO valor de vendas total no ano eh de %d reais",soma);
}
