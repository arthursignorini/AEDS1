#include<stdio.h>
media (){
    int filho, cont=0,pop=0;
    float salario, soma=0;
    char escolha;
    do {
        printf("\nQuantos filhos voce tem: ");
        scanf("%d",&filho);
        cont += filho;
        printf("Qual eh o seu salario: ");
        scanf("%f",&salario);
        soma += salario;
        printf("Deseja continuar, S ou N: ");
        scanf(" %c",&escolha);
        pop++;
    } while(escolha == 'S');
    float mediasal = (float)soma / pop;
    printf("A media eh %.2f",mediasal);
    printf("\nA soma dos filhos eh de %d",cont);
}
int main(){
    media();
}
