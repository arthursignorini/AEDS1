#include<stdio.h>
typedef struct
{
    int idade;
    char sexo;
    float renda;
    int filhos;
} pop;
void media_sal(pop hab[])
{
    float soma = 0;
    for(int i=0; i<3; i++){
        soma += hab[i].renda;
    }
    float media = (float)soma / 3;
    printf("A media da renda eh %.2f\n",media);
}

void tam(pop hab[])
{
    int maior = hab[0].idade;
    int menor = hab[0].idade;
    for(int i =0; i<3; i++){
        if(hab[i].idade > maior){
            maior = hab[i].idade;
        }
        if(hab[i].idade < menor){
            menor = hab[i].idade;
        }
    }
    printf("A maior idade eh %d e a menor idade eh %d\n",maior,menor);
}

void caso(pop hab[])
{
    int cont = 0;
    for(int i=0; i<3; i++){
        if(hab[i].sexo == 'f' && hab[i].filhos > 2 && hab[i].renda < 600){
            cont++;
        }
    }
    printf("A quantidade de mulheres nessas condicoes eh de %d\n",cont);
}

int main()
{
    pop hab[3];
    for(int i=0; i<3; i++){
        printf("Digite a idade: ");
        scanf("%d",&hab[i].idade);
        printf("Digite o sexo: ");
        scanf(" %c",&hab[i].sexo);
        printf("Digite a renda: ");
        scanf("%f",&hab[i].renda);
        printf("Digite a quantidade de filhos: ");
        scanf("%d",&hab[i].filhos);
        printf("\n");
    }

    media_sal(hab);
    tam(hab);
    caso(hab);
}
