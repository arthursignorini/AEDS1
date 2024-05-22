#include<stdio.h>

int soma(int num, int sum)
{
    if(num == 0){
        return sum;
    } else {
        sum += num;
        return soma(num -1, sum);
    }
}

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    int result = soma(num, 0);
    printf("A soma dos %d numeros eh %d",num, result);
}
