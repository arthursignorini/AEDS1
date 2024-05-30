#include<stdio.h>

typedef struct {
    char descricao[50];
    float valor;
    int quantidade;
    int codigo;
} estoque;

void alterar(estoque estoque[], int codigo)
{
    for(int i = 0; i < 3; i++) {
        if(codigo == estoque[i].codigo) {
            printf("Digite a descricao nova: ");
            fgets(estoque[i].descricao, sizeof(estoque[i].descricao), stdin);
            printf("Digite o valor novo: ");
            scanf("%f", &estoque[i].valor);
            printf("Digite a quantidade nova: ");
            scanf("%d", &estoque[i].quantidade);
            printf("\n");
            getchar(); // Limpa o buffer de entrada
            printf("A alteracao foi realizada com sucesso\n");
            return;
        }
    }
}

void letra(estoque estoque[])
{
    char x;
    printf("Digite uma letra: ");
    scanf(" %c", &x);
    getchar(); // Limpa o buffer de entrada
    printf("Você digitou a letra: %c\n", x);

    for(int i = 0; i < 3; i++) {
        printf("Comparando com a descricao: %s\n", estoque[i].descricao);
        if(x == estoque[i].descricao[0]) {
            puts(estoque[i].descricao);
        }
    }
}


void mostrar (estoque estoque[])
{
    for(int i = 0; i < 3; i++) {
        if(estoque[i].quantidade < 5) {
            puts(estoque[i].descricao);
        }
    }
}

int main()
{
    estoque estoque[3];
    for(int i = 0; i < 3; i++) {
        printf("Digite a descricao: ");
        fgets(estoque[i].descricao, sizeof(estoque[i].descricao), stdin);
        printf("Digite o valor: ");
        scanf("%f", &estoque[i].valor);
        printf("Digite a quantidade: ");
        scanf("%d", &estoque[i].quantidade);
        estoque[i].codigo = i;
        printf("\n");
        getchar(); // Limpa o buffer de entrada
    }
    int codigo;
    printf("Digite o codigo do produto que voce quer alterar: ");
    scanf("%d", &codigo);
    getchar();

    alterar(estoque, codigo);
    letra(estoque);
    mostrar(estoque);
}
