#include<stdio.h>

#define tam 3

typedef struct
{
    char nome[30];
    int carros;
    int acidentes;
} a;

void preencher(a estado[])
{
    for(int i = 0; i < tam; i++){
        printf("Digite o nome do estado: ");
        fgets(estado[i].nome, 30, stdin);

        printf("Digite a quantidade de carros: ");
        scanf("%d",&estado[i].carros);
        getchar();
        printf("Digite a quantidade de acidentes: ");
        scanf("%d",&estado[i].acidentes);
        getchar();
        printf("\n");
    }
}

void maior_menor(a estado[])
{
    int maior = estado[0].acidentes;
    int menor = estado[0].acidentes;
    int nome1, nome2;

    for(int i = 0; i < tam; i++){
        if(estado[i].acidentes > maior){
            maior = estado[i].acidentes;
            nome1 = i;
        }
        if(estado[i].acidentes < menor){
            menor = estado[i].acidentes;
            nome2  = i;
        }
    }
    printf("O maior indice de acidentes foi %d e ocorreu no estado de %s",maior,estado[nome1].nome);
    printf("\nO menor indice de acidentes foi %d e ocorreu no estado de %s",menor,estado[nome2].nome);
    printf("\n\n");

}

void percentual(a estado[])
{
    float soma = 0.0;
    for(int i = 0; i < tam; i++){
        soma += estado[i].carros;
    }

    float percent;
    for(int i = 0; i < tam; i++){
        percent = (float)estado[i].carros / soma;
        printf("O percentual de carros no estado de %s eh de %.2f\n",estado[i].nome,percent*100);

    }
}

void media_acidentes(a estado[])
{
    float soma = 0.0;
    for(int i = 0; i < tam; i++){
        soma += estado[i].acidentes;
    }

    float media;
    printf("\n\n");
    for(int i = 0; i < tam; i++){
        media = (float)estado[i].acidentes / soma;
        printf("A media de acidentes no estado de %s eh de %.2f\n",estado[i].nome, media);

    }
}

int main()
{
    a estado[tam];
    preencher(estado);
    maior_menor(estado);
    percentual(estado);
    media_acidentes(estado);

    return 0;
}
