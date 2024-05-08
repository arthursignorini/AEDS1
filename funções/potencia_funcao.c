#include<stdio.h>
#include<stdlib.h>

int potencia (int, int);

int main(){
    int x,y,result;

    printf("Digite a base: ");
    scanf("%d",&x);
    printf("Digite o expoente: ");
    scanf("%d",&y);

    result = potencia(x,y);

    printf("O resultado dessa conta eh %d",result);
}
int potencia(int x, int y) {
    return pow(x,y);
}
