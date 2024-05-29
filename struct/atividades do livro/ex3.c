#include<stdio.h>

#define qntd 3

typedef struct {
    char sexo;
    float altura;
    int idade;
    char olhos;
} habitantes;

void media(habitantes pessoa[])
{
    int cont=0, soma =0;
    for(int i=0; i<qntd; i++){
        if(pessoa[i].olhos == 'c' && pessoa[i].altura > 160){
            cont++;
            soma += pessoa[i].idade;
        }
    }
    float media = (float)soma / cont;
    printf("A media das idades das pessoas que tem olhos castanhos e sao maiores de 1.60 eh %.2f\n",media);
}

void maior_idade (habitantes pessoa[])
{
    int maior = pessoa[0].idade;
    for(int i=0; i<qntd; i++){
        if(pessoa[i].idade > maior){
            maior = pessoa[i].idade;
        }
    }
    printf("A maior idade eh de %d\n",maior);
}

void estranho (habitantes pessoa[])
{
    int cont = 0;
    for(int i=0; i<qntd; i++){
        if((pessoa[i].sexo == 'f' && pessoa[i].idade > 25 && pessoa[i].idade <= 45) || (pessoa[i].olhos == 'v' && pessoa[i].altura < 170)){
            cont++;
        }
    }
    printf("A quantidade de pessoas nessa situação eh de %d\n",cont);
}

void homens (habitantes pessoa[])
{
    int cont = 0;
    for(int i=0; i<qntd; i++){
        if(pessoa[i].sexo == 'm'){
            cont++;
        }
    }
    float percent = (float)cont / qntd * 100;
    printf("O percentual de homens eh de %.2f\n",percent);
}
int main()
{
    habitantes pessoa[qntd];

    for(int i=0; i<qntd; i++){
        printf("Digite o seu sexo: ");
        scanf(" %c",&pessoa[i].sexo);
        printf("Digite a sua altura: ");
        scanf("%f",&pessoa[i].altura);
        printf("Digite a sua idade: ");
        scanf("%d",&pessoa[i].idade);
        printf("Digite a cor dos olhos: ");
        scanf(" %c",&pessoa[i].olhos);
        printf("\n");
    }

    media(pessoa);
    maior_idade(pessoa);
    estranho(pessoa);
    homens(pessoa);

}
