#include<stdio.h>
int main(){
    int x = 5;
    float y = 3.5;

    int *p = &x;
    float *ptr = &y;

    printf("Novo valor: ");
    scanf("%d",p); // Scanf precisa receber um endereço
    printf("\n%d",*p); // Printa o conteudo da variavel pra onde P aponta

    printf("Novo valor: ");
    scanf("%d",ptr);
    printf("%d",*ptr);
}
