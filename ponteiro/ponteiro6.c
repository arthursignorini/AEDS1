#include<stdio.h>
int main(){
    int n;
    int *p;

    printf("Digite um numero: ");
    scanf("%d",&n);

    p = &n;

    if(*p % 2 == 0){
        printf("Esse numero eh par");
    }else {
        printf("Esse numero eh impar");
    }

}
