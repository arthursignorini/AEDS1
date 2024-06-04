#include<stdio.h>
#include<string.h>

#define tam 3

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    int cod_med;
    char nome[50];
    char endereco[100];
    float salario;
} Medico;

typedef struct
{
    int cod_pac;
    char nome_pac[50];
    char endereco_pac[100];
    int idade_pac;
} Paciente;

typedef struct
{
    int num_prontuario;
    Data data_consulta;
    char diagnostico[100];
    int cod_med;
    int cod_paciente;
} Consulta;

void preencher(Medico medico[], Paciente paciente[], Consulta consulta[])
{
    for (int i = 0; i < tam; i++) {
        printf("Digite os dados do medico %d:\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &medico[i].cod_med);
        getchar();
        printf("Nome: ");
        fgets(medico[i].nome, 50, stdin);
        medico[i].nome[strcspn(medico[i].nome, "\n")] = '\0';
        printf("Endereco: ");
        fgets(medico[i].endereco, 100, stdin);
        medico[i].endereco[strcspn(medico[i].endereco, "\n")] = '\0';
        scanf("%f", &medico[i].salario);
        getchar();
        printf("\n");
    }

    for (int i = 0; i < tam; i++) {
        printf("Digite os dados do paciente %d:\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &paciente[i].cod_pac);
        getchar();
        printf("Nome: ");
        fgets(paciente[i].nome_pac, 50, stdin);
        paciente[i].nome_pac[strcspn(paciente[i].nome_pac, "\n")] = '\0';
        printf("Endereco: ");
        fgets(paciente[i].endereco_pac, 100, stdin);
        paciente[i].endereco_pac[strcspn(paciente[i].endereco_pac, "\n")] = '\0';
        printf("Idade: ");
        scanf("%d", &paciente[i].idade_pac);
        getchar();
        printf("\n");
    }

    for (int i = 0; i < tam; i++) {
        printf("Digite os dados da consulta %d:\n", i + 1);
        printf("Numero do prontuario: ");
        scanf("%d", &consulta[i].num_prontuario);
        printf("Data da consulta (dia mes ano): ");
        scanf("%d %d %d", &consulta[i].data_consulta.dia, &consulta[i].data_consulta.mes, &consulta[i].data_consulta.ano);
        getchar();
        printf("Diagnostico: ");
        fgets(consulta[i].diagnostico, 100, stdin);
        consulta[i].diagnostico[strcspn(consulta[i].diagnostico, "\n")] = '\0';
        printf("Codigo do medico: ");
        scanf("%d", &consulta[i].cod_med);
        printf("Codigo do paciente: ");
        scanf("%d", &consulta[i].cod_paciente);
        getchar();
        printf("\n");
    }
}

void alterar_medico (Medico medico[], int codigo)
{
    for(int i = 0; i < tam; i++) {
        if(codigo == medico[i].cod_med) {
            printf("Alterando cadastro do medico...\n");
            printf("Digite o nome novo: ");
            fgets(medico[i].nome, 50, stdin);
            medico[i].nome[strcspn(medico[i].nome, "\n")] = 0;
            printf("Digite o endereco novo: ");
            fgets(medico[i].endereco, 100, stdin);
            medico[i].endereco[strcspn(medico[i].endereco, "\n")] = 0;
            printf("Digite o salario novo: ");
            scanf("%f", &medico[i].salario);
            getchar();
            return;
        }
    }
    printf("Medico nao encontrado.\n");
}

void alterar_paciente (Paciente paciente[], int codigo)
{
    for(int i = 0; i < tam; i++){
        if(codigo == paciente[i].cod_pac){
            printf("Alterar cadastro do paciente...\n");
            printf("Digite o nome novo: ");
            fgets(paciente[i].nome_pac, 50, stdin);
            paciente[i].nome_pac[strcspn(paciente[i].nome_pac, "\n")] = '\0';
            printf("Digite o endereco novo: ");
            fgets(paciente[i].endereco_pac, 100, stdin);
            paciente[i].endereco_pac[strcspn(paciente[i].endereco_pac, "\n")] = '\0';
            printf("Digite a idade nova: ");
            scanf("%d", &paciente[i].idade_pac);
            getchar();
            return;
        }
    }
    printf("Paciente nao encontrado.\n");
}

void remover(Medico medico[], int codigo)
{
    for(int i = 0; i < tam; i++){
        if(codigo == medico[i].cod_med){
            medico[i].cod_med = 0;
            strcpy(medico[i].nome, "");
            strcpy(medico[i].endereco, "");
            medico[i].salario = 0;
            printf("Medico removido.\n");
            return;
        }
    }
    printf("Medico nao encontrado.\n");
}

void mostrar (Medico medico[], Paciente paciente[], Consulta consulta[], int dia, int mes, int ano)
{
    printf("\n\n");
    for(int i = 0; i < tam; i++){
        if(consulta[i].data_consulta.dia == dia && consulta[i].data_consulta.mes == mes && consulta[i].data_consulta.ano == ano) {
            printf("Numero do prontuario: %d\n", consulta[i].num_prontuario);
            printf("Diagnostico: %s\n", consulta[i].diagnostico);
            for(int j = 0; j < tam; j++){
                if(consulta[i].cod_med == medico[j].cod_med){
                    printf("Medico: %s\n", medico[j].nome);
                }
                if(consulta[i].cod_paciente == paciente[j].cod_pac){
                    printf("Paciente: %s\n", paciente[j].nome_pac);
                }
            }
            printf("\n");
        }
    }
}

int main()
{
    Medico medico[tam];
    Paciente paciente[tam];
    Consulta consulta[tam];

    preencher(medico, paciente, consulta);

    int x;
    printf("Escolha uma opcao:\n1) Inclusoes ou alteracoes no cadastro\n2) Remover um medico\n3) Mostrar todas as consultas em uma data especifica\nOPCAO: ");
    scanf("%d", &x);
    int codigo, escolha, dia, mes, ano;

    switch (x) {
    case 1:
        printf("Digite 1 se quiser incluir ou alterar o cadastro de um medico e 2 para um paciente: ");
        scanf("%d", &escolha);
        if(escolha == 1){
            printf("Digite o codigo do medico: ");
            scanf("%d", &codigo);
            getchar();
            alterar_medico(medico, codigo);
        } else {
            printf("Digite o codigo do paciente: ");
            scanf("%d", &codigo);
            getchar();
            alterar_paciente(paciente, codigo);
        }
        break;

    case 2:
        printf("Digite o codigo do medico: ");
        scanf("%d", &codigo);
        getchar();
        remover(medico, codigo);
        break;

    case 3:
        printf("Digite o dia: ");
        scanf("%d", &dia);
        printf("Digite o mes: ");
        scanf("%d", &mes);
        printf("Digite o ano: ");
        scanf("%d", &ano);
        mostrar(medico, paciente, consulta, dia, mes, ano);
        break;
    }

    return 0;
}
