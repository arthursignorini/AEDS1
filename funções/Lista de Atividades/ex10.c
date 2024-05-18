#include<stdio.h>
void categoria (int idade)
{

    if(idade > 4 && idade <8){
        printf("F");
    }
    if(idade>7 && idade <11){
        printf("E");
    }
    if(idade>10 && idade <14){
        printf("D");
    }
    if(idade > 13 && idade < 16){
        printf("C");
    }
    if(idade > 15 && idade < 18){
        printf("B");
    }
    if(idade > 17){
        printf("A");
    }
    printf("\n");
}


int main()
{
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d",&idade);
    categoria(idade);
}
