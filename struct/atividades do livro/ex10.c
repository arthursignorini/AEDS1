#include <stdio.h>

#define TAM 3

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int documento;
    int codigo_cliente;
    Data data_vencimento;
    Data data_pagamento;
    float valor_conta;
    float juros; // Corrigido para float
} Cliente;

void preencher(Cliente vet[]) {
    for (int i = 0; i < TAM; i++) {
        printf("Digite o numero do documento: ");
        scanf("%d", &vet[i].documento);
        printf("Digite o codigo do cliente: ");
        scanf("%d", &vet[i].codigo_cliente);
        printf("Digite o dia de vencimento: ");
        scanf("%d", &vet[i].data_vencimento.dia);
        printf("Digite o mes de vencimento: ");
        scanf("%d", &vet[i].data_vencimento.mes);
        printf("Digite o ano de vencimento: ");
        scanf("%d", &vet[i].data_vencimento.ano);
        printf("Digite o dia de pagamento: ");
        scanf("%d", &vet[i].data_pagamento.dia);
        printf("Digite o mes de pagamento: ");
        scanf("%d", &vet[i].data_pagamento.mes);
        printf("Digite o ano de pagamento: ");
        scanf("%d", &vet[i].data_pagamento.ano);
        printf("Digite o valor da conta: ");
        scanf("%f", &vet[i].valor_conta);
    }
}

void calcula_juros(Cliente vet[]) {
    for (int i = 0; i < TAM; i++) {
        int dias_atraso = 0;
        if (vet[i].data_pagamento.ano > vet[i].data_vencimento.ano ||
            (vet[i].data_pagamento.ano == vet[i].data_vencimento.ano && vet[i].data_pagamento.mes > vet[i].data_vencimento.mes) ||
            (vet[i].data_pagamento.ano == vet[i].data_vencimento.ano && vet[i].data_pagamento.mes == vet[i].data_vencimento.mes && vet[i].data_pagamento.dia > vet[i].data_vencimento.dia)) {

            dias_atraso = (vet[i].data_pagamento.ano - vet[i].data_vencimento.ano) * 365 +
                          (vet[i].data_pagamento.mes - vet[i].data_vencimento.mes) * 30 +
                          (vet[i].data_pagamento.dia - vet[i].data_vencimento.dia);

            vet[i].juros = vet[i].valor_conta * (dias_atraso * (0.02 / 100));
        } else {
            vet[i].juros = 0;
        }
    }
}

void total(Cliente vet[]) {
    printf("\n\n");
    for (int i = 0; i < TAM; i++) {
        printf("O total que o cliente %d tem que pagar eh %.2f\n", i + 1, vet[i].valor_conta + vet[i].juros);
    }
}

void media(Cliente vet[]) {
    printf("\n\n");
    float soma = 0.0;
    for (int i = 0; i < TAM; i++) {
        soma += vet[i].juros;
    }
    float media = soma / TAM;
    printf("A media de juros eh de %.2f\n", media);
}

int main() {
    Cliente vet[TAM];
    preencher(vet);
    calcula_juros(vet);
    total(vet);
    media(vet);
    return 0;
}
