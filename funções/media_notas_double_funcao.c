#include<stdio.h>
#include<stdlib.h>

double media (double *p) {
    double soma = 0;
    for(int i=0; i<10; i++){
        printf("Digite uma nota: ");
        scanf("%lf",&p[i]);
        soma += p[i];
    }
    return soma / 10;
}


int main(){
    double *p = (double *)malloc(10*sizeof(double));
    printf("A media eh %.2lf",media(p));
}
