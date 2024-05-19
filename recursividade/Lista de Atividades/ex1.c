#include<stdio.h>

int contar(int x,int cont){
    if(x == 0){
        return cont;
    } else {
        cont++;
        return contar(x/10,cont);
    }
}
int main()
{
    int x;
    printf("Digite um numero: ");
    scanf("%d",&x);
    printf("Esse numero tem %d digitos", contar(x, 0));
}

