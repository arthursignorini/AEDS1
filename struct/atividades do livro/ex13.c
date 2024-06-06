#include <stdio.h>
#include <string.h>

typedef struct {
    int cod_est;
    char nome_est[50];
    float salario;
} Estilista;

typedef struct {
    int cod_rou;
    char descricao[50];
    int cod_est;
    int cod_estacao;
    int ano;
} Roupa;

typedef struct {
    int cod_estacao;
    char nome_estacao[50];
} Estacao;

void cadastrar_estilistas(Estilista estilistas[]) {
    for (int i = 0; i < 3; i++) {
        printf("Digite o codigo do estilista: ");
        scanf("%d", &estilistas[i].cod_est);
        getchar();
        printf("Digite o nome do estilista: ");
        fgets(estilistas[i].nome_est, 50, stdin);
        estilistas[i].nome_est[strcspn(estilistas[i].nome_est, "\n")] = '\0';
        printf("Digite o salario do estilista: ");
        scanf("%f", &estilistas[i].salario);
        getchar();
        printf("\n");
    }
}

void cadastrar_estacoes(Estacao estacao[]) {
    for (int i = 0; i < 2; i++) {
        printf("Digite o codigo da estacao: ");
        scanf("%d", &estacao[i].cod_estacao);
        getchar();
        printf("Digite o nome da estacao (primavera-verao ou outono-inverno): ");
        fgets(estacao[i].nome_estacao, 50, stdin);
        estacao[i].nome_estacao[strcspn(estacao[i].nome_estacao, "\n")] = '\0';
        printf("\n");
    }
}

void cadastrar_roupa(Roupa roupa[], int num) {
    for (int i = 0; i < num; i++) {
        printf("Digite o codigo da roupa: ");
        scanf("%d", &roupa[i].cod_rou);
        getchar();
        printf("Digite a descricao da roupa: ");
        fgets(roupa[i].descricao, 50, stdin);
        roupa[i].descricao[strcspn(roupa[i].descricao, "\n")] = '\0';
        printf("Digite o codigo da estacao: ");
        scanf("%d", &roupa[i].cod_estacao);
        getchar();
        printf("Digite o codigo do estilista: ");
        scanf("%d", &roupa[i].cod_est);
        getchar();
        printf("Digite o ano da roupa: ");
        scanf("%d", &roupa[i].ano);
        getchar();
        printf("\n");
    }
}

void relatorio(Roupa roupa[], int num, Estacao estacao[], Estilista estilistas[]) {
    int x;
    printf("Digite o codigo da estacao que voce quer ver: ");
    scanf("%d", &x);
    printf("\n");

    for (int i = 0; i < num; i++) {
        if (roupa[i].cod_estacao == x) {
            printf("Codigo da roupa: %d\n", roupa[i].cod_rou);
            printf("Descricao: %s\n", roupa[i].descricao);

            // Encontrar o estilista correspondente
            for (int t = 0; t < 3; t++) {
                if (roupa[i].cod_est == estilistas[t].cod_est) {
                    printf("Nome do estilista: %s\n", estilistas[t].nome_est);
                    break;
                }
            }

            printf("Ano: %d\n\n", roupa[i].ano);
        }
    }
}

int main() {
    Estilista estilistas[3];
    cadastrar_estilistas(estilistas);
    Estacao estacao[2];
    cadastrar_estacoes(estacao);
    int num;
    printf("Digite quantas roupas voce que adicionar: ");
    scanf("%d", &num);
    Roupa roupa[num];
    cadastrar_roupa(roupa, num);
    relatorio(roupa, num, estacao, estilistas);
    return 0;
}
