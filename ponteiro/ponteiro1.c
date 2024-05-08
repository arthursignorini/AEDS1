#include<stdio.h>
int main(){
// ver qual endereço é maior
    int *p1, *p2;
    int x,y;
    printf("Digite um valor para X: ");
    scanf("%d",&x);
    printf("Digite um valor para o Y: ");
    scanf("%d",&y);

    p1 = &x;
    p2 = &y;

    if(p1 > p2){
        printf("O maior endereco eh de %p",p1);
    } else{
        printf("O maior endereco eh de %p",p2);
    }
}
