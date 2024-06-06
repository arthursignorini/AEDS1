#include <stdio.h>
#include <string.h>

typedef struct {
    int cod_pac;
    char nome_pac[50];
    int fone_pac;
} Paciente;

typedef struct {
    int cod_med;
    char nome_med[50];
    int fone_med;
} Medico;

typedef struct {
    int num_consulta;
    int dia_semana;
    int hora;
    int cod_med;
    int cod_pac;
} Consulta;

void preencher_med(Medico medico[]) {
    for(int i = 0; i < 3; i++) {
        int codigo, encontrado = 0;
        printf("Digite o codigo do medico: ");
        scanf("%d", &codigo);

        for(int j = 0; j < i; j++) {
            if(codigo == medico[j].cod_med) {
                encontrado = 1;
                printf("Ja existe um medico com esse codigo\n");
                break;
            }
        }

        if(!encontrado) {
            medico[i].cod_med = codigo;
            printf("Digite o telefone do medico: ");
            scanf("%d", &medico[i].fone_med);
            getchar(); // Limpa o buffer do teclado
            printf("Digite o nome do medico: ");
            fgets(medico[i].nome_med, 50, stdin);
            medico[i].nome_med[strcspn(medico[i].nome_med, "\n")] = '\0';
            printf("\n");
        } else {
            i--; // Para repetir a entrada caso o código já exista
        }
    }
}

void preencher_pac(Paciente paciente[]) {
    for(int i = 0; i < 5; i++) {
        int codigo, encontrado = 0;
        printf("Digite o codigo do paciente: ");
        scanf("%d", &codigo);

        for(int j = 0; j < i; j++) {
            if(codigo == paciente[j].cod_pac) {
                encontrado = 1;
                printf("Ja tem um paciente com esse codigo\n");
                break;
            }
        }

        if(!encontrado) {
            paciente[i].cod_pac = codigo;
            printf("Digite o telefone do paciente: ");
            scanf("%d", &paciente[i].fone_pac);
            getchar(); // Limpa o buffer do teclado
            printf("Digite o nome do paciente: ");
            fgets(paciente[i].nome_pac, 50, stdin);
            paciente[i].nome_pac[strcspn(paciente[i].nome_pac, "\n")] = '\0';
            printf("\n");
        } else {
            i--; // Para repetir a entrada caso o código já exista
        }
    }
}

int contar(Consulta consulta[], int medico, int dia, int x) {
    int cont = 0;
    for(int j = 0; j < x; j++) {
        if(consulta[j].cod_med == medico && consulta[j].dia_semana == dia) {
            cont++;
        }
    }
    return cont;
}

void preencher_consulta(Consulta consulta[], int x, Medico medico[]) {
    for(int i = 0; i < x; i++) {
        printf("Digite o numero da consulta: ");
        scanf("%d", &consulta[i].num_consulta);
        printf("Digite o codigo do medico: ");
        scanf("%d", &consulta[i].cod_med);
        printf("Digite o dia da semana (1- domingo / 2- segunda / 3- terca / 4- quarta / 5- quinta / 6- sexta / 7- sabado): ");
        int dia;
        scanf("%d", &dia);

        if(contar(consulta, consulta[i].cod_med, dia, i) < 2) {
            consulta[i].dia_semana = dia;
            printf("Digite a hora da consulta: ");
            scanf("%d", &consulta[i].hora);
            printf("Digite o codigo do paciente: ");
            scanf("%d", &consulta[i].cod_pac);
            printf("\n");
        } else {
            printf("Esse medico ja tem 2 consultas nesse dia\n");
            i--; // Para repetir a entrada caso o médico já tenha 2 consultas no dia
        }
    }
}

int main() {
    Medico medico[3];
    Paciente paciente[5];
    preencher_med(medico);
    preencher_pac(paciente);

    int x;
    printf("Digite quantas consultas voce quer adicionar: ");
    scanf("%d", &x);
    Consulta consulta[x];
    preencher_consulta(consulta, x, medico);

    return 0;
}
