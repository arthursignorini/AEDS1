#include<stdio.h>

int divisores (int x){
    int soma=0;
    for(int i=1; i<=x; i++){
        if( x % i == 0){
            soma += i;
        }
    }
    return soma;
}


int main()
{
    int x;
    printf("Digite um numero: ");
    scanf("%d",&x);
    printf("A soma dos divisores desse numero eh %d",divisores(x));
}
