#include <stdio.h>

#define TAM 3

typedef struct {
    float salario;
    float valor_total;
} Vendedor;

void funcao(Vendedor vet[]) {
    float soma = 0.0;
    for (int i = 0; i < TAM; i++) {
        printf("Digite o seu salario: ");
        scanf("%f", &vet[i].salario);
        printf("Digite o seu total de vendas: ");
        scanf("%f", &vet[i].valor_total);
        soma += vet[i].valor_total;
    }
    float comissao = soma * 0.06;

    for (int i = 0; i < TAM; i++) {
        printf("A comissao que o funcionario %d vai receber eh %.2f e o seu salario total eh de %.2f\n",
               i + 1, comissao, vet[i].salario + comissao);
    }
}

int main() {
    Vendedor vet[TAM];
    funcao(vet);
    return 0;
}
