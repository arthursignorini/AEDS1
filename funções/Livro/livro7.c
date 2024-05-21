#include<stdio.h>

float media(){
    int x, cont=0,soma=0;
    printf("Digite um numero: ");
    scanf("%d",&x);
    while(x != 0){
        soma += x;
        cont++;
        printf("Digite um numero: ");
        scanf("%d",&x);
    }
    float conta = (float)soma / cont;
    return conta;
}

int main()
{
    printf("A media desses numeros eh %.2f",media());
}
