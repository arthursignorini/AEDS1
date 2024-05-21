#include<stdio.h>
#include<stdlib.h>
int pares (int vet[]){
    int cont=0;
    for(int i=0; i<15; i++){
        vet[i] = rand() % 100;
        printf("%d ",vet[i]);
    }

    for(int i=0; i<15; i++){
        if(vet[i] % 2 == 0){
            cont++;
        }
    }
    return cont;
}

int main()
{

    int vet[15];
    int result = pares(vet);
    printf("A soma dos numeros pares eh %d", result);
}
