#include<stdio.h>
void trig(){
    int a,b,c;
    printf("Tamanho do lado A: ");
    scanf("%d",&a);
    printf("Tamanho do lado B: ");
    scanf("%d",&b);
    printf("Tamanho do lado C: ");
    scanf("%d",&c);

    if(a + b > c && a + c > b && c + b > a) {
        printf("Eh possivel formar um triangulo com esses lados!\n");
        if(a == b && b == c){
            printf("O triangulo eh equilatero");
        }
        if((a == b && b != c) || (a == c && c != b) || (b == c && c != a)){
            printf("O triangulo eh isosceles");
           }
        if(a != b && a!= c && c!= b){
            printf("O triangulo eh escaleno");
        }
    } else {
        printf("Nao eh possivel formar um triangulo");
    }
}
int main()
{
    trig();
    return 0;
}
