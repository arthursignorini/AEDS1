#include<stdio.h>

float peso(float alt, int x){
    float peso;
    if(x == 0){
        peso = 72.7 * alt - 58;
    } else{
        peso = 62.1 * alt - 44.7;
    }
    return peso;
}

int main()
{
    int x;
    float alt;
    printf("Digite a sua altura: ");
    scanf("%f",&alt);
    printf("Se for homem digite 0 e se for mulher digite 1: ");
    scanf("%d",&x);
    printf("O peso ideal eh %.2f",peso(alt,x));
}
