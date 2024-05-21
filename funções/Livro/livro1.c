#include<stdio.h>

int soma(int n){
    int sum=0;
    for(int i=0; i<=n; i++){
        sum += i;
    }
    return sum;
}

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    printf("A soma eh %d",soma(n));
}
