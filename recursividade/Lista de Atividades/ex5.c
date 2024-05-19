#include<stdio.h>
float fat(int x){
    float deno=1;
    for(int i=1; i<=x; i++){
        deno *= i;
    }
    return deno;
}
float divisao(int x){
    float soma=0.0;
    for(int i=0; i<=x;i++){
        soma += 1 / fat(i);
    }
    return soma;
}
int main(){

    int x;
    printf("Digite um valor: ");
    scanf("%d",&x);
    printf("A soma dessa conta eh %.2f",divisao(x));

}
