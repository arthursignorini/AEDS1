#include<stdio.h>
#include<stdlib.h>

int negativos (int *vet, int n) {
    int cont =0;

    for(int i=0; i<n; i++){
        printf("Digite um valor: ");
        scanf("%d",&vet[i]);
    }

    for(int i=0; i<n; i++){
        if(vet[i] < 0){
            cont++;
        }
    }
    return cont;
}


int main(){
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    int *vet = (int*)malloc(n*sizeof(int));

    printf("A quantidade de numeoros negativos sao %d",negativos(vet,n));

    free(vet);

}
