#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[20];
    int codigo;
    char email[30];
    float salario;
} Colaborador;

void preencher(Colaborador colaborador[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("COLABORADOR %d\n", i + 1);
        printf("Digite o nome do colaborador: ");
        scanf("%19s", colaborador[i].nome);
        printf("Digite o codigo desse colaborador: ");
        scanf("%d", &colaborador[i].codigo);
        printf("Digite o seu email: ");
        scanf("%29s", colaborador[i].email);
        printf("Digite o salario do colaborador: ");
        scanf("%f", &colaborador[i].salario);
        printf("\n");
    }
}

void gravar(Colaborador colaborador[], int tam) {
    FILE *arquivo = fopen("arquivo.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }
    for (int i = 0; i < tam; i++) {
        if (colaborador[i].codigo != -1) {
            fprintf(arquivo, "%s %d %s %.2f\n", colaborador[i].nome, colaborador[i].codigo, colaborador[i].email, colaborador[i].salario);
        }
    }
    fclose(arquivo);
}

void adicionar(int tam, int total, Colaborador colaborador[]) {
    for (int i = tam; i < total; i++) {
        printf("COLABORADOR %d\n", i + 1);
        printf("Digite o nome do colaborador: ");
        scanf("%19s", colaborador[i].nome);
        printf("Digite o codigo desse colaborador: ");
        scanf("%d", &colaborador[i].codigo);
        printf("Digite o seu email: ");
        scanf("%29s", colaborador[i].email);
        printf("Digite o salario do colaborador: ");
        scanf("%f", &colaborador[i].salario);
        printf("\n");
    }
}

int main() {
    int tam;
    printf("Digite quantas pessoas voce quer armazenar: ");
    scanf("%d", &tam);
    Colaborador colaborador[tam];
    for (int i = 0; i < tam; i++) {
        colaborador[i].codigo = -1;
    }

    preencher(colaborador, tam);
    gravar(colaborador, tam);

    int opcao;

    while (1) {
        system("clear");
        printf("\nMenu:\n");
        printf("1. Alterar salario de colaborador\n");
        printf("2. Remover colaborador\n");
        printf("3. Pesquisar colaborador por nome e por codigo\n");
        printf("4. Imprimir soma de todos os salarios\n");
        printf("5. Adicionar um novo colaborador\n");
        printf("6. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        int x, total;
        char escolha[20];
        float soma = 0.0;

        switch (opcao) {
            case 1:
                printf("Digite o codigo do colaborador que voce quer mudar o salario: ");
                scanf("%d", &x);
                for (int i = 0; i < tam; i++) {
                    if (x == colaborador[i].codigo) {
                        printf("Digite o salario novo: ");
                        scanf("%f", &colaborador[i].salario);
                        gravar(colaborador, tam);
                        break;
                    }
                }
                break;
            case 2:
                printf("Digite o codigo do colaborador que voce quer remover: ");
                scanf("%d", &x);
                for (int i = 0; i < tam; i++) {
                    if (x == colaborador[i].codigo) {
                        colaborador[i].codigo = -1;
                        gravar(colaborador, tam);
                        break;
                    }
                }
                break;
            case 3:
                printf("Digite o codigo do colaborador que voce quer pesquisar: ");
                scanf("%d", &x);
                printf("Digite o nome do colaborador que voce quer pesquisar: ");
                scanf("%19s", escolha);
                for (int i = 0; i < tam; i++) {
                    if (x == colaborador[i].codigo && strcmp(escolha, colaborador[i].nome) == 0) {
                        printf("Codigo: %d\n", colaborador[i].codigo);
                        printf("Nome: %s\n", colaborador[i].nome);
                        printf("Email: %s\n", colaborador[i].email);
                        printf("Salario: %.2f\n", colaborador[i].salario);
                        break;
                    }
                }
                break;
            case 4:
                for (int i = 0; i < tam; i++) {
                    if (colaborador[i].codigo != -1) {
                        soma += colaborador[i].salario;
                    }
                }
                printf("\nA soma de todos os salarios eh de %.2f\n", soma);
                break;
            case 5:
                printf("Digite quantos colaboradores voce quer adicionar: ");
                scanf("%d", &x);
                total = tam + x;
                adicionar(tam, total, colaborador);
                tam = total;
                gravar(colaborador, tam);
                break;
            case 6:
                return 0;
            default:
                printf("Opção invalida.\n");
        }
    }
}
