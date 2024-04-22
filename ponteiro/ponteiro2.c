#include<stdio.h>
int main(){
    int x,y;
    int *p1,*p2;

// ver qual é o valor que está presente no maior endereço
    printf("Digite um valor para X: ");
    scanf("%d",&x);
    printf("Digite um valor para Y: ");
    scanf("%d",&y);

    p1 = &x;
    p2 = &y;

    if(p1 > p2){
        printf("O valor que esta presente no maior endereco eh %d",*p1);
    } else {
        printf("O valor que esta presente no maior endereco eh %d",*p2);
    }
}

