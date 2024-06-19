#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivo14;
    int numero, nota1, nota2;
    char nome[20];
    while (1) {
        int x;
        printf("\nMENU\n");
        printf("1- Criar\n");
        printf("2- Incluir\n");
        printf("3- Mostrar\n");
        printf("4- Sair\n");
        printf("Escolha a sua opcao: ");
        scanf("%d", &x);
        switch (x) {
            case 1:
                arquivo14 = fopen("notas.txt", "w");
                if (arquivo14 == NULL) {
                    printf("Erro ao criar o arquivo.\n");
                    return 1;
                }
                fputs("NOME\tNUMERO\tNOTA1\tNOTA2\n", arquivo14);
                fclose(arquivo14);
                printf("Arquivo criado com sucesso.\n");
                break;

            case 2:
                arquivo14 = fopen("notas.txt", "a");
                if (arquivo14 == NULL) {
                    printf("Erro ao abrir o arquivo para inclusão.\n");
                    return 1;
                }
                printf("Digite o seu nome: ");
                scanf("%s", nome);
                printf("Digite o seu numero: ");
                scanf("%d", &numero);
                printf("Digite a sua nota 1: ");
                scanf("%d", &nota1);
                printf("Digite a sua nota 2: ");
                scanf("%d", &nota2);
                fprintf(arquivo14, "%s\t%d\t%d\t%d\n", nome, numero, nota1, nota2);
                fclose(arquivo14);
                printf("Dados incluídos com sucesso.\n");
                break;

            case 3:
                arquivo14 = fopen("notas.txt", "r");
                if (arquivo14 == NULL) {
                    printf("Erro ao abrir o arquivo para leitura.\n");
                    return 1;
                }
                char linha[100];
                while (fgets(linha, sizeof(linha), arquivo14) != NULL) {
                    printf("%s", linha);
                }
                fclose(arquivo14);
                break;

            case 4:
                printf("Saindo...\n");
                return 0;

            default:
                printf("Opcao invalida.\n");
                break;
        }
    }
}
