#include<stdio.h>
#include<stdlib.h>

void ordem (int, int*);

int main() {
    int qntd;
    int result;

    printf("Digite quantos numeros tem no array: ");
    scanf("%d",&qntd);

    int *p;
    p = (int *)malloc(qntd * sizeof(int));

    for(int i=0; i<qntd; i++){
        printf("Digite um valor: ");
        scanf("%d",&p[i]);
    }

    ordem(qntd, p);

    for(int i=0; i<qntd; i++){
        printf("%d ",p[i]);
    }
}
void ordem (int qntd, int *p) {
    int temp;
    for(int i=0; i<qntd-1; i++){
        for(int j=0; j<qntd-1-i; j++){
            if(p[j] > p[j + 1]) {
                temp = p[j + 1];
                p[j + 1] = p[j];
                p[j] = temp;
            }
        }
    }
}
