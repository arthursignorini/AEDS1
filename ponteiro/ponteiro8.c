#include<stdio.h>
#include<limits.h>
int main(){
    // achar qual eh o maior numero
    int vet[5];
    int *p;
    int maior;

    p = vet;
    maior = INT_MIN;
    for(int i=0; i<5; i++,p++){
        printf("Digite um valor: ");
        scanf("%d",p);
        if(*p > maior){
            maior = *p;
        }
    }
    printf("O maior numero eh %d",maior);
}
