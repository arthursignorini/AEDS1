#include<stdio.h>
#include<stdlib.h>

int fatorial (int x){
    int result=1;
    for(int i=1; i<= x; i++){
        result *= i;
    }
    return result;
}

int main(){
    int x,result;

    printf("Digite um numero: ");
    scanf("%d",&x);

    result = fatorial(x);
    printf("O fatorial de %d eh %d",x,result);
}
