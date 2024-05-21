#include<stdio.h>
int divisao(int n1, int n2)
{
    if(n1 % n2 == 0){
        return 0;
    } else {
        for(int i=n2; i<=n1; i++){
            if(n1 % i == 0){
                return i;
            }
        }
    }
}

int main()
{
    int n1, n2;
    printf("Valor dos numeros: ");
    scanf("%d %d",&n1,&n2);
    if (divisao(n1,n2) == 0){
        printf("Esse numero divide o outro corretamente");
    } else {
        printf("O proximo divisor eh %d",divisao(n1,n2));
    }
}
