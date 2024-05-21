#include<stdio.h>

int maior(int matriz[][10]){
    int resp = matriz[0][1];
    for(int i=0; i<10; i++){
        for(int j = i+1; j<10; j++){
            if(matriz[i][j] > resp){
                resp = matriz[i][j];
            }
        }
    }
    return resp;
}

int main()
{
    int matriz[10][10];
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            matriz[i][j] = rand()%1000;
        }
    }
    printf("\n");
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
          printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

    int result = maior(matriz);
    printf("\n\nO maior numero a cima da diagonal principal eh %d",result);
}
