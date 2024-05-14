#include<stdio.h>
void troca(int *p, int *ptr){
    int aux;
    aux = *p;
    *p = *ptr;
    *ptr = aux;

    printf("Valor de x eh: %d",*p);
    printf("\nValor de y eh: %d",*ptr);

}

int main(){
    int x, y;
    int *p, *ptr;

    p = &x;
    ptr = &y;

    printf("Digite um valor para x: ");
    scanf("%d",&x);

    printf("Digite um valor para y: ");
    scanf("%d",&y);

    troca (p,ptr);

}
