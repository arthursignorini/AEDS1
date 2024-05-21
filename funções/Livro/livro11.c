#include<stdio.h>

float soma(int x){
    float soma = 0.0;
    for(int i=1; i<=x; i++){
        soma += (float)(i*i + 1) / (i + 3);
    }
    return soma;
}

int main()
{
    int x;
    printf("Digite um valor: ");
    scanf("%d",&x);
    printf("A soma eh %.2f",soma(x));
}
