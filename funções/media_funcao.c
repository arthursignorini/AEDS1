#include<stdio.h>
#include<stdlib.h>

int calmedia(int, int *);

int main(){
    int quantidade;
    int *notas;
    float media;

    printf("Quantidade de alunos: ");
    scanf("%d",&quantidade);

    notas = (int *)malloc(quantidade * sizeof(int));

    for(int i=0; i<quantidade; i++){
        printf("Digite a nota do aluno %d: ",i);
        scanf("%d",&notas[i]);

    }

    media = calmedia(quantidade, notas);
    printf("A media eh de %.2f",media);

}
calmedia(int quantidade, int *notas){
    int soma = 0;
    for(int i=0; i<quantidade; i++){
        soma += notas[i];
    }
    float media;
    media = (float) soma / quantidade;
    return media;
}
