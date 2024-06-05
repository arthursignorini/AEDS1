#include<stdio.h>
#include<string.h>

#define tam 3

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int cod_cli;
    char nome[50];
    char endereco[50];
    int telefone;
} Cliente;

typedef struct {
    int num_doc;
    float valor_doc;
    Data data_emissao;
    Data data_vencimento;
    int cod_cli;
} Recebimento;

void preencher(Cliente cliente[], Recebimento recebimento[]) {
    printf("CLIENTES:\n");
    for (int i = 0; i < tam; i++) {
        printf("Digite o codigo do cliente: ");
        scanf("%d", &cliente[i].cod_cli);
        getchar();
        printf("Digite o nome do cliente: ");
        fgets(cliente[i].nome, 50, stdin);
        cliente[i].nome[strcspn(cliente[i].nome, "\n")] = '\0';
        printf("Digite o endereco do cliente: ");
        fgets(cliente[i].endereco, 50, stdin);
        cliente[i].endereco[strcspn(cliente[i].endereco, "\n")] = '\0';
        printf("Digite o telefone do cliente: ");
        scanf("%d", &cliente[i].telefone);
        getchar();
        printf("\n\n");
    }
    printf("RECEBIMENTOS:\n");
    for (int i = 0; i < tam; i++) {
        printf("Digite o codigo do cliente: ");
        scanf("%d", &recebimento[i].cod_cli);
        printf("Digite o numero do recebimento: ");
        scanf("%d", &recebimento[i].num_doc);
        printf("Digite o valor do recebimento: ");
        scanf("%f", &recebimento[i].valor_doc);
        printf("Digite a data de emissao (dia mes ano): ");
        scanf("%d %d %d", &recebimento[i].data_emissao.dia, &recebimento[i].data_emissao.mes, &recebimento[i].data_emissao.ano);
        printf("Digite a data de vencimento (dia mes ano): ");
        scanf("%d %d %d", &recebimento[i].data_vencimento.dia, &recebimento[i].data_vencimento.mes, &recebimento[i].data_vencimento.ano);
    }
}

void incluir(Recebimento recebimento[], int *tam) {
    printf("Digite o codigo do cliente: ");
    scanf("%d", &recebimento[*tam].cod_cli);
    printf("Digite o numero do recebimento: ");
    scanf("%d", &recebimento[*tam].num_doc);
    printf("Digite o valor do recebimento: ");
    scanf("%f", &recebimento[*tam].valor_doc);
    printf("Digite a data de emissao (dia mes ano): ");
    scanf("%d %d %d", &recebimento[*tam].data_emissao.dia, &recebimento[*tam].data_emissao.mes, &recebimento[*tam].data_emissao.ano);
    printf("Digite a data de vencimento (dia mes ano): ");
    scanf("%d %d %d", &recebimento[*tam].data_vencimento.dia, &recebimento[*tam].data_vencimento.mes, &recebimento[*tam].data_vencimento.ano);
    (*tam)++;
}

void alterar(Cliente cliente[]) {
    int codigo;
    printf("Digite o codigo do cliente que voce quer alterar: ");
    scanf("%d",&codigo);
    for (int i = 0; i < tam; i++) {
        if (codigo == cliente[i].cod_cli) {
            printf("Digite o novo nome: ");
            getchar(); // Limpar o buffer do teclado
            fgets(cliente[i].nome, 50, stdin);
            cliente[i].nome[strcspn(cliente[i].nome, "\n")] = '\0';
            printf("Digite o novo endereco: ");
            fgets(cliente[i].endereco, 50, stdin);
            cliente[i].endereco[strcspn(cliente[i].endereco, "\n")] = '\0';
            printf("Digite o novo telefone: ");
            scanf("%d", &cliente[i].telefone);
        }
    }
}

int atraso(Recebimento recebimento[], int x) {
    int dias1 = (recebimento[x].data_emissao.dia) + (recebimento[x].data_emissao.mes * 30) + (recebimento[x].data_emissao.ano * 365);
    int dias2 = (recebimento[x].data_vencimento.dia) + (recebimento[x].data_vencimento.mes * 30) + (recebimento[x].data_vencimento.ano * 365);
    int conta = dias2 - dias1;

    if (conta < 0) {
        return conta;
    } else {
        return 0;
    }
}

void mostrar(Recebimento recebimento[], Cliente cliente[]) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            if (recebimento[i].cod_cli == cliente[j].cod_cli) {
                printf("Nome: %s\n", cliente[j].nome);
                printf("Numero do documento: %d\n", recebimento[i].num_doc);
                printf("O valor: %.2f\n", recebimento[i].valor_doc);
                printf("Dias em atraso: %d\n", atraso(recebimento, i));
            }
        }
    }
}

int main() {
    Cliente cliente[tam];
    Recebimento recebimento[tam];
    preencher(cliente, recebimento);
    int tam_recebimento = tam;
    incluir(recebimento, &tam_recebimento);
    alterar(cliente);
    mostrar(recebimento, cliente);

    return 0;
}
