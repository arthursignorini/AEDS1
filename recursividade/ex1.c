#include<stdio.h>
// IMPRIME DE 0 ATÉ X
void imprimir(int x) {
    if( x == 0) {
        printf("%d ",x);
    } else {
         imprimir(x-1);
         printf("%d ",x);
    }
}
int main(){
    int x;
    printf("Digite um numero: ");
    scanf("%d",&x);

    imprimir(x);
}


#include<stdio.h>
// OUTRO - ESSE IMPRIME DE X A 0
void imprimir(int x) {
    if( x == 0) {
        printf("%d ",x);
    } else {
      printf("%d ",x);
       imprimir(x-1);
    }
}
int main(){
    int x;
    printf("Digite um numero: ");
    scanf("%d",&x);

    imprimir(x);
}
