#include<stdio.h>
int main(){
    int vet[5];
    int *p;

    p = vet;

    for(int i=0; i<5; i++){
        printf("Digite um valor: ");
        scanf("%d",p);
        *p *= 2;
        p++;
    }

    p = vet;
    for(int i=0; i<5; i++){
        printf("%d ",*p);
        p++;
    }
}
