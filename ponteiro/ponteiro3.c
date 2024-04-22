#include<stdio.h>
int main(){
    int x,y;
    int *p1,*p2, aux;

    // inversão de valores

    printf("Digite um valor para X: ");
    scanf("%d",&x);
    printf("Digite um valor para Y: ");
    scanf("%d",&y);

    p1 = &x;
    p2 = &y;

    aux = *p1;
    *p1 = *p2;
    *p2 = aux;

    printf("O valor de X eh %d e o Y eh %d",*p1,*p2);
}
