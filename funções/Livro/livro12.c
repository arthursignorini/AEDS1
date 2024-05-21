#include<stdio.h>
int conta(int x, int y){
    int aux=1;
    for(int i=0; i<y; i++){
        aux *= x;
    }
    return aux;
}

int main()
{
    int x, y;
    printf("Digite 2 valores: ");
    scanf("%d %d",&x, &y);
    printf("Essa conta da %d",conta(x,y));
}
