#include<stdio.h>
#include<stdlib.h>

void ordem(int x,int y, int z)
{
    int temp;
    int vet[3] = {x,y,z};
    for(int i=0; i<3-i; i++){
        for(int j=0; j<3-i-1; j++){
            if(vet[j] > vet[j + 1]){
                temp = vet[j +1];
                vet[j+1] = vet[j];
                vet[j] = temp;
            }
        }
    }
    for(int i=0; i<3; i++){
        printf("%d ",vet[i]);
    }
    printf("\n");
}

int main(){

    int qntd,x,y,z;
    printf("Numero de conjuntos para analizar: ");
    scanf("%d",&qntd);
    for(int i=0; i<qntd;i++){
        printf("Valor 1: ");
        scanf("%d",&x);
        printf("Valor 2: ");
        scanf("%d",&y);
        printf("Valor 3: ");
        scanf("%d",&z);
        ordem(x,y,z);
    }
}
