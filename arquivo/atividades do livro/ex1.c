#include <stdio.h>
#include <string.h>

typedef struct {
    int cod_cli;
    char nome[20];
    char endereco[20];
} Cliente;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int num_doc;
    float valor_doc;
    Data data_emissao;
    Data data_vencimento;
    int cod_cli;
} Recebimento;

Cliente preencherCliente() {
    Cliente cliente;
    printf("Digite o codigo do cliente: ");
    scanf("%d", &cliente.cod_cli);
    getchar(); // Consume the newline character left by scanf
    printf("Digite o nome do cliente: ");
    fgets(cliente.nome, 20, stdin);
    cliente.nome[strcspn(cliente.nome, "\n")] = '\0'; // Remove the newline character
    printf("Digite o endereco do cliente: ");
    fgets(cliente.endereco, 20, stdin);
    cliente.endereco[strcspn(cliente.endereco, "\n")] = '\0'; // Remove the newline character
    return cliente;
}

Recebimento preencherRecebimento() {
    Recebimento recebimento;
    printf("Digite o numero do documento: ");
    scanf("%d", &recebimento.num_doc);
    printf("Digite o valor do documento: ");
    scanf("%f", &recebimento.valor_doc);
    printf("Digite a data de emissão (dia mes ano): ");
    scanf("%d %d %d", &recebimento.data_emissao.dia, &recebimento.data_emissao.mes, &recebimento.data_emissao.ano);
    printf("Digite a data de vencimento (dia mes ano): ");
    scanf("%d %d %d", &recebimento.data_vencimento.dia, &recebimento.data_vencimento.mes, &recebimento.data_vencimento.ano);
    printf("Digite o codigo do cliente: ");
    scanf("%d", &recebimento.cod_cli);
    return recebimento;
}

void gravar(Cliente cliente, Recebimento recebimento) {
    FILE *arquivo1;
    arquivo1 = fopen("clientes.txt", "a"); // Use append mode
    if (arquivo1 == NULL) {
        printf("Erro ao abrir o arquivo clientes.txt!\n");
        return;
    }
    fprintf(arquivo1, "%d\n%s\n%s\n", cliente.cod_cli, cliente.nome, cliente.endereco);
    fclose(arquivo1);

    FILE *arquivo2;
    arquivo2 = fopen("recebimentos.txt", "a"); // Use append mode
    if (arquivo2 == NULL) {
        printf("Erro ao abrir o arquivo recebimentos.txt!\n");
        return;
    }
    fprintf(arquivo2, "%d\n%.2f\n%d %d %d\n%d %d %d\n%d\n",
            recebimento.num_doc, recebimento.valor_doc,
            recebimento.data_emissao.dia, recebimento.data_emissao.mes, recebimento.data_emissao.ano,
            recebimento.data_vencimento.dia, recebimento.data_vencimento.mes, recebimento.data_vencimento.ano,
            recebimento.cod_cli);
    fclose(arquivo2);
}

int main() {
    Cliente cliente = preencherCliente(cliente);
    Recebimento recebimento = preencherRecebimento(recebimento);
    gravar(cliente, recebimento);
    return 0;
}

