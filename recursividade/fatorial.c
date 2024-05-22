#include<stdio.h>
int fatorial (int num, int fat)
{
    if(num == 0){
        return fat;
    } else {
        fat *= num;
        return fatorial(num-1, fat);
    }
}

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    printf("O resultado desse fatorial eh %d",fatorial(num,1));
}
