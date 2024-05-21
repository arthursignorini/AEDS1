#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mat(int vetor[], int size)
{
    int positivos = 0, negativos = 0;
    for(int i = 0; i < 30; i++)
    {
        if(vetor[i] <= 0)
            negativos++;
        else
            positivos++;
    }

    printf("Quantidade negativos e positivos\n");
    printf("%d %d\n", negativos, positivos);

    int vetorA[positivos];
    int vetorB[negativos];

    int j = 0;
    int k = 0;

    for(int i = 0; i < 30; i++)
    {
        if(vetor[i] <= 0)
            vetorA[j++] = vetor[i];
        else
            vetorB[k++] = vetor[i];
    }

    printf("Valores vetor A: \n");
    for(int i = 0; i < positivos; i++)
        printf("%d ", vetorA[i]);

    printf("\nValores vetor B: \n");
    for(int i = 0; i < negativos; i++)
        printf("%d ", vetorB[i]);
}

int main ()
{
    int vetor[30];
    srand(time(NULL));

    for(int i = 0; i < 30; i++)
    {
        vetor[i] = rand() % (2 * 100 + 1) - 100;
    }

    printf("\nValores aleatorios vetor1: \n");
    for(int i = 0; i < 30; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\nValores da funcao: \n");
    mat(vetor, 30);

    return 0;
}
