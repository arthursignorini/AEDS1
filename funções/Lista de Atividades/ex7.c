#include<stdio.h>
#include<stdbool.h>

bool teste(int num){
    bool par;
    if(num % 2 == 0) {
        par = true;
    } else {
        par = false;
    }
    return par;
}
int main(){

    int n,num;
    printf("Quantos numeros vao ser analisados: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("Digite um numero: ");
        scanf("%d",&num);
        if(teste(num)) {
            printf("PAR\n");
        } else {
            printf("IMPAR\n");
        }
    }
}
