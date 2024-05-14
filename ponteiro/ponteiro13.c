#include<stdio.h>

void dobro(int *p, int *ptr){
    *p *= 2;
    *ptr *= 2;

    printf("\nO dobro de a eh %d",*p);
    printf("\nO dobro de b eh %d",*ptr);

}

int main() {
    int a,b;
    int *p,*ptr;

    printf("Digite um valor para a: ");
    scanf("%d",&a);
    printf("Digite um valor para b: ");
    scanf("%d",&b);

    p = &a;
    ptr = &b;

    dobro(p,ptr);

}
