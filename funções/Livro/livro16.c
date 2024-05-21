#include<stdio.h>
int soma (int vet[]){
    int sum=0;
    for(int i=0; i<20; i++){
        vet[i] = rand() % 100;
        sum += vet[i];
        printf("%d ",vet[i]);
    }
    return sum;

}

int main()
{
    int vet[20];
    int result = soma(vet);
    printf("\nA soma dos elementos eh %d", result);
}
