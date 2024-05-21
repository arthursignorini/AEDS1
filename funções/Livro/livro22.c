#include<stdio.h>
int preencher (int matriz[][5])
{
    for(int i=0; i<10; i++){
        for(int j=0; j<5;j++){
            matriz[i][j] = rand()%10;
        }
    }
    int soma = 0;
    for(int i=6; i<10; i++){
        for(int j=0; j<5; j++){
            soma += matriz[i][j];
        }
    }
    return soma;
}
int main()
{
    int matriz[10][5];
    int result = preencher(matriz);
    printf("A soma eh %d",result);
}
