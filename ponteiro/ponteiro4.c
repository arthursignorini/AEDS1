#include<stdio.h>
int main(){
    int vet[5],soma=0;
    int *p;

    // soma de vetor com ponteiro
     p = vet;
    for(int i =0; i<5; i++,p++){
        printf("Digite um valor para o vetor: ");
        scanf("%d", p);
    }

    p = vet;
    for(int i=0; i<5; i++,p++){
        soma += *p;
    }
    printf("A soma eh de %d: ",soma);
}
