#include<stdio.h>
#include<stdlib.h>

int maior (int, int *);

int main() {
    int qntd;
    int *p;
    int result;
    int x;
    printf("Digite quantos numeros vao ter: ");
    scanf("%d",&qntd);

    p = (int *)malloc(qntd * sizeof(int));

    for(int i=0; i<qntd; i++){
        printf("Digite um valor: ");
        scanf("%d",&p[i]);
    }

    result = maior(qntd,p);
    printf("O maior numero eh %d",result);
}
int maior(int qntd, int *p) {
    int x = *p;

    for(int i=0; i<qntd; i++){
        if(p[i] > x ){
            x = p[i];
        }
    }
    return x;
}
