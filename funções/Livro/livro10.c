#include<stdio.h>

float soma(int x){
    float soma = 0.0;
    for(int i=1; i<=x; i++){
        soma += 1.0/i;
    }
    return soma;
}


int main()
{
    int x;
    printf("Digite um numero: ");
    scanf("%d",&x);
    printf("O resultado dessa soma eh de %.2f",soma(x));
}
