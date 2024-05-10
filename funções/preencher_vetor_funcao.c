#include<stdio.h>
#include<stdlib.h>

void preencherVetor(int *vetor, int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("Digite o valor para o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void imprimirVetor(int *vetor, int tamanho) {
    printf("O vetor inserido eh: ");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int tamanho;

    printf("Digite a quantidade de numeros no vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int *)malloc(tamanho * sizeof(int));

    if(vetor == NULL) {
        printf("Erro na alocação de memoria.\n");
        return 1;
    }

    preencherVetor(vetor, tamanho);

    imprimirVetor(vetor, tamanho);

    return 0;
}
