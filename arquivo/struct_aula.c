#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[20];
    int codigo;
    char email[30];
    float salario;
} Colaborador;

void preencher(Colaborador colaborador[]) {
    for (int i = 0; i < 5; i++) {
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

void gravar(Colaborador colaborador[]) {
    FILE *arquivo;
    arquivo = fopen("arquivo.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }
    for (int i = 0; i < 5; i++) {
        if (colaborador[i].codigo != -1) {
            fprintf(arquivo, "%s %d %s %.2f\n", colaborador[i].nome, colaborador[i].codigo, colaborador[i].email, colaborador[i].salario);
        }
    }
    fclose(arquivo);
}

int main() {
    Colaborador colaborador[5];
    for (int i = 0; i < 5; i++) {
        colaborador[i].codigo = -1;
    }

    preencher(colaborador);
    gravar(colaborador);

    int opcao;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Alterar salario de colaborador\n");
        printf("2. Remover colaborador\n");
        printf("3. Pesquisar colaborador por nome e por codigo\n");
        printf("4. Imprimir soma de todos os salarios\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        int x;
        char escolha[20];
        float soma = 0.0;

        switch (opcao) {
            case 1:
                printf("Digite o codigo do colaborador que voce quer mudar o salario: ");
                scanf("%d", &x);
                for (int i = 0; i < 5; i++) {
                    if (x == colaborador[i].codigo) {
                        printf("Digite o salario novo: ");
                        scanf("%f", &colaborador[i].salario);
                        gravar(colaborador);
                        break;
                    }
                }
                break;
            case 2:
                printf("Digite o codigo do colaborador que voce quer remover: ");
                scanf("%d", &x);
                for (int i = 0; i < 5; i++) {
                    if (x == colaborador[i].codigo) {
                        colaborador[i].codigo = -1;
                        gravar(colaborador);
                        break;
                    }
                }
                break;
            case 3:
                printf("Digite o codigo do colaborador que voce quer pesquisar: ");
                scanf("%d", &x);
                printf("Digite o nome do colaborador que voce quer pesquisar: ");
                scanf("%19s", escolha);
                for (int i = 0; i < 5; i++) {
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
                for (int i = 0; i < 5; i++) {
                    if (colaborador[i].codigo != -1) {
                        soma += colaborador[i].salario;
                    }
                }
                printf("\nA soma de todos os salarios eh de %.2f\n", soma);
                break;
            case 5:
                return 0;
            default:
                printf("Opção invalida.\n");
        }
    }
}
