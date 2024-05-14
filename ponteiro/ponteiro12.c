#include<stdio.h>

void troca(int *p,int *ptr){
    int aux;

    if(*p > *ptr){

    } else {
        aux = *p;
        *p = *ptr;
        *ptr = aux;
    }

    printf("\nO maior numero eh: %d",*p);
    printf("\nO menor numero eh: %d",*ptr);
}

int main(){

    int x,y;
    int *p, *ptr;
    printf("Digite um valor pra x: ");
    scanf("%d",&x);
    printf("Digite um valor pra y: ");
    scanf("%d",&y);

    p = &x;
    ptr = &y;

    troca(p,ptr);


}
