#include<stdio.h>
#include<stdlib.h>

int primo(int);

int main(){
    int num;
    int result;
    int x;
    printf("Digite um numero: ");
    scanf("%d",&num);

    result = primo(num);
    if(result == 1) {
        printf("EH PRIMO");
    } else {
        printf("NAO EH PRIMO");
    }
}
int primo(int num){
    int cont = 0,x;
    for(int i=1; i<=num; i++){
        if(num % i == 0){
            cont++;
        }
    }
    if (cont == 2){
        x = 1; // é primo
    } else {
        x = 0; // não é primo
    }
    return x;
}
