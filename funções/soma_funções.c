#include<stdio.h>
#include<stdlib.h>
int soma(int ,int);

int main(){
    int x,y;

    printf("Valor de x: ");
    scanf("%d",&x);
    printf("Valor de y: ");
    scanf("%d",&y);

    int result = soma(x, y);
    printf("A soma eh %d",result);
}
int soma(int x, int y){
    return x + y;
}
