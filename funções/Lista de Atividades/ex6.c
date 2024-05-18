#include<stdio.h>
float sum(int x){
    float soma = 1;
    for(int i=1; i<=x; i++){
        soma += 1.0 / fat(i);
    }
    return soma;
}


fat(int i){
    float fatorial = 1;
    for(int j=1; j<=i; j++){
        fatorial *= j;
    }
    return fatorial;
}

int main()
{
    int x;
    printf("Digite um valor: ");
    scanf("%d",&x);
    printf("A soma eh %.2f",sum(x));
}
