#include<stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    int vet[4] = {a, b, c, d};
    int temp;
    for(int i=0; i<4-i; i++){
        for(int j=0; j<4-i-1; j++){
            if(vet[j] > vet[j+1]){
                temp = vet[j+1];
                vet[j+1] = vet[j];
                vet[j] = temp;
            }
        }
    }

    int maior,menor;
    if(vet[0] + vet[3] > vet[1] + vet[2]){
        maior = vet[0] + vet[3];
        menor = vet[1] + vet[2];
    } else {
        maior = vet[1] + vet[2];
        menor = vet[0] + vet[3];
    }
    printf("%d",maior-menor);
}

