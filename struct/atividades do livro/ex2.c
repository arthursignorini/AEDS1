#include<stdio.h>

typedef struct {
    float salario;
    int idade;
    int filhos;
    char sexo;
} pessoa;

void media_sal (pessoa pop[]){
    float soma=0.0;
    for(int i=0; i<5; i++){
        soma += pop[i].salario;
    }

    float media = soma / 5;
    printf("A media dos salarios eh %.2f\n",media);
}

void media_filhos(pessoa pop[]){
    float soma = 0.0;
    for(int i=0; i<5; i++){
        soma+= pop[i].filhos;
    }

    float media = soma / 5;
    printf("A media dos filhos eh %.2f\n",media);
}

void maior_sal(pessoa pop[]) {
    float maior = pop[0].salario;
    for(int i=0; i<5; i++){
        if(pop[i].salario > maior){
            maior = pop[i].salario;
        }
    }
    printf("O maior salario eh %.2f\n",maior);
}

void mulheres (pessoa pop[]){
    int cont = 0;
    int cont2 = 0;
    for(int i=0; i<5; i++){
        if(pop[i].sexo == 'f'){
            cont++;
            if(pop[i].salario > 1000){
                cont2++;
            }
        }
    }
    float media = cont2 / cont;
    printf("A porcentagem de mulheres que recebem mais de 1000 reais eh %.2f",media*100);

}
int main()
{
    pessoa pop[5];

    for(int i=0; i<5; i++){
        printf("Digite o seu salario: ");
        scanf("%f",&pop[i].salario);
        printf("Digite a sua idade: ");
        scanf("%d",&pop[i].idade);
        printf("Digite a quantidade de filhos: ");
        scanf("%d",&pop[i].filhos);
        printf("Digite o seu sexo: ");
        scanf(" %c",&pop[i].sexo);
        printf("\n");
    }

    media_sal(pop);
    media_filhos(pop);
    maior_sal(pop);
    mulheres(pop);

}
