#include<stdio.h>
#include<stdlib.h>

int contarDigito (int x) {
    int resto, num=x,cont=0;
    while (num != 0) {
        resto = num % 10;
        num = num / 10;
        cont++;
    }
    return cont;
}
    int main(){
        int x;

        printf("Digite um numero: ");
        scanf("%d",&x);

        printf("Esse numero tem %d digitos",contarDigito(x));
    }

