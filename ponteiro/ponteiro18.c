#include<stdio.h>
int main(){
    int vet[5];
    int *p;

    p = vet;

    for(int i=0; i<5; i++){
        printf("Digite um valor: ");
        scanf("%d",p);
        p++;
    }

    p = vet;
    for(int i=0; i<5; i++){
        if(*p % 2 == 0){
            printf("%p\n",p);
        }
        p++;
    }
}
