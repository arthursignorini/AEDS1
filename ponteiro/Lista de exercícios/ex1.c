#include<stdio.h>
int main(){
    int x, y;
    printf("Digite um valor pra x: ");
    scanf("%d",&x);
    printf("Digite um valor para y: ");
    scanf("%d",&y);

    if(&x > &y){
        printf("O maior endereco eh %p",&x);
    } else {
        printf("%O maior endereco eh %p",&y);
    }
}
