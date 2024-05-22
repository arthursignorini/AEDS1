#include<stdio.h>

int divisao(int numerador, int denominador, int cont)
{
    if(numerador < denominador){
        return cont;
    } else {
        cont++;
        return divisao(numerador-denominador,denominador,cont);
    }
}

int main()
{
    int n1, n2;
    printf("Digite um valor: ");
    scanf("%d",&n1);
    printf("Digite outro valor: ");
    scanf("%d",&n2);
    printf("A divisao eh %d",divisao(n1,n2,0));
}
