#include<stdio.h>
int maior(int*x,int*y){
    if(*x < *y){
        int temp = *x;
        *x = *y;
        *y = temp;
    }
}
int main(){
    int x,y;
    printf("Digite um valor: ");
    scanf("%d",&x);
    printf("Digite outro valor: ");
    scanf("%d",&y);
    maior(&x,&y);

    printf("O maior valor eh %d\n",x);
    printf("O menor valor eh %d",y);
}
