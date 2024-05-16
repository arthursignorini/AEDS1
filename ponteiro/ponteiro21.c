#include<stdio.h>
#include<stdlib.h>

int funcao (int *arr, int *max, int *min,int x) {

    for(int i=0; i<x; i++){
        printf("Digite um valor: ");
        scanf("%d",&arr[i]);
    }
    *max = arr[0];
    *min = arr[0];
    for(int i=0; i<x; i++){
        if(arr[i] > *max) {
            *max = arr[i];
        }

        if(arr[i] < *min){
            *min = arr[i];
        }
    }

}

int main(){

    int min, max,x;

    printf("Digite o tamanho desse array: ");
    scanf("%d",&x);

    int *arr = (int*)malloc(x * sizeof(int));

    funcao(arr,&max,&min,x);

    printf("O maior valor eh %d e o menor valor eh %d",max,min);
}

