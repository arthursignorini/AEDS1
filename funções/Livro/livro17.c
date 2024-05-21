#include<stdio.h>
int mdc (int n1, int n2){
    int resp;
    int menor;
    if(n1 < n2){
        menor = n1;
    } else {
        menor = n2;
    }
    for(int i=1; i<= menor; i++){
        if(n1 % i == 0 && n2 % i ==0){
            resp = i;
        }
    }
    return resp;
}


int main()
{
    int n1, n2;
    printf("Digite o valor: ");
    scanf("%d",&n1);
    printf("Digite outro valor: ");
    scanf("%d",&n2);

    printf("O MDC desses numeros eh %d",mdc(n1,n2));
}
