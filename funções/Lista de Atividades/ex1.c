#include<stdio.h>
arit(int n1,int n2,int n3) {
    int soma = n1 + n2 + n3;
    float media = (float) soma / 3;
    printf("A media aritmetica eh %.2f",media);
}
pond(int n1,int n2,int n3) {
    int soma = (5 * n1) + (3 * n2) + (2 * n3);
    float media = (float) soma / 10;
    printf("A media ponderada eh %.2f",media);
}
int main()
{
    int n1,n2,n3;
    printf("Digite a nota 1: ");
    scanf("%d",&n1);
    printf("Digite a nota 2: ");
    scanf("%d",&n2);
    printf("Digite a nota 3: ");
    scanf("%d",&n3);
    char escolha;
    printf("Voce tem duas escolhas: \nA) Media Aritmetica\nB) Media ponderada:\n ");
    scanf(" %c",&escolha);
    if(escolha == 'A'){
        arit(n1,n2,n3);
    } else {
        if(escolha == 'B'){
            pond(n1,n2,n3);
        } else {
            printf("NAO TEMOS ESSA OPCAO");
        }
    }
}
