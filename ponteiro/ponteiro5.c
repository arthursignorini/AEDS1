#include<stdio.h>
int main(){
    // achar o maior numero do vetor
    int vetor[5] = {3,4,1,5,2};
    int *p;

    p = vetor;
    int maior = *p;
    for(int i =0; i<5; i++,p++){
        if(*p > maior){
            maior = *p;
        }
    }
    printf("O maior numero eh %d",maior);
}
