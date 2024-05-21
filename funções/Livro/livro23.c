#include<stdio.h>

int temp (int vet[]){
    int maior = vet[0];
    for(int i=0; i<12; i++){
        if (vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
}

int main()
{
    int vet[12];
    for(int i=0; i<12; i++){
        printf("Temperatura media do mes %d: ", i+1);
        scanf("%d",&vet[i]);
    }

    printf("A maior temperatura do ano eh %d",temp(vet));
}
