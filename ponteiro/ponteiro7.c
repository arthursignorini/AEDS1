#include<stdio.h>
int main(){
    // calcular a media dos numeros no vetor
    float media;
    int vet[5],soma=0;
    int *p;
    p = vet;

    for(int i=0; i<5; i++){
        printf("Digite um valor: ");
        scanf("%d",p);

        soma += *p;
    }

    media = (float)soma / 5;
    printf("A media eh %.2f",media);


}
