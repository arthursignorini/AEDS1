#include<stdio.h>

int soma(int num, int sum)
{
    if(num == 0){
        return sum;
    } else {
        sum += num%10;
        return soma(num/10, sum);
    }
}

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    printf("A soma dos digitos desse numero eh %d",soma(num,0));
}
