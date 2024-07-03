#include<stdio.h>
#include<stdlib.h>

float somar (int x, int y, float vet1[x], float vet2[y])
{
    for(int i=0; i<x; i++){
        printf("Digite um valor para o vet1: ");
        scanf("%f",&vet1[i]);
    }
    for(int i=0; i<y; i++){
        printf("Digite um valor para o vet2: ");
        scanf("%f",&vet2[i]);
    }

    float *vet3 = (float *)malloc(sizeof(float));
    float soma = 0.0;

    if(x > y) {
        for(int i=0; i<y; i++){
            soma += vet1[i] + vet2[i];
        }
        for(int i=y; i<x;i++){
            soma += vet1[i];
        }
    }
    if(y > x) {
        for(int i=0; i<x; i++){
            soma += vet1[i] + vet2[i];
        }
        for(int i=x; i<y;i++){
            soma += vet2[i];
        }
    }
    *vet3 = soma;
    return vet3[0];
}


int main()
{
    int x,y;
    printf("Digite o tamanho do vet1: ");
    scanf("%d",&x);
    printf("Digite o valor do vet2: ");
    scanf("%d",&y);
    float vet1[x], vet2[y];
    float result = somar(x,y,vet1,vet2);
    printf("A soma eh %.2f",result);
}
