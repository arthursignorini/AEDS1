#include<stdio.h>
#include<string.h>

typedef struct
{
    int cod_estilista;
    char nome_estilista[20];
    float salario;
} Estilista;

typedef struct
{
    int cod_roupa;
    char descricao_roupa[30];
    int cod_estilista;
    int cod_estacao;
} Roupa;

typedef struct
{
    int cod_estacao;
    char nome_estacao[30];
} Estacao;

void cadastrar_estacao(Estacao estacao[])
{
    for(int i=0; i<2; i++){
        printf("Digite o codigo da estacao: ");
        scanf("%d",&estacao[i].cod_estacao);
        getchar();
        printf("Digite o nome da estacao: ");
        fgets(estacao[i].nome_estacao, 30, stdin);
        estacao[i].nome_estacao[strcspn(estacao[i].nome_estacao, "\n")] = '\0';
        printf("\n");
    }
}

void cadastrar_estilista(Estilista estilista[])
{
    for(int i=0; i<3; i++){
        printf("Digite o codigo do estilista: ");
        scanf("%d",&estilista[i].cod_estilista);
        getchar();
        printf("Digite o nome do estilista: ");
        fgets(estilista[i].nome_estilista, 20, stdin);
        estilista[i].nome_estilista[strcspn(estilista[i].nome_estilista, "\n")] = '\0';
        printf("Digite o salario do estilista: ");
        scanf("%f",&estilista[i].salario);
        getchar();
        printf("\n");
    }
}

void cadastrar_roupa(Roupa roupa[])
{
    for(int i=0; i<5; i++){
        printf("Digite o codigo da roupa: ");
        scanf("%d",&roupa[i].cod_roupa);
        getchar();
        printf("Digite a descricao da roupa: ");
        fgets(roupa[i].descricao_roupa, 30, stdin);
        roupa[i].descricao_roupa[strcspn(roupa[i].descricao_roupa, "\n")] = '\0';
        printf("Digite o codigo do estilsita: ");
        scanf("%d",&roupa[i].cod_estilista);
        printf("Digite o codigo da estacao: ");
        scanf("%d",&roupa[i].cod_estacao);
        printf("\n");
    }
}

void gravar(Estacao estacao[], Estilista estilista[], Roupa roupa[])
{
    FILE *arquivo1;
    arquivo1 = fopen("estacoes.txt","w");
    for(int i=0;i<2;i++){
        fprintf(arquivo1, "Nome da estacao: %s / Codigo da estacao: %d\n",estacao[i].nome_estacao, estacao[i].cod_estacao);
    }
    fclose(arquivo1);

    FILE *arquivo2;
    arquivo2 = fopen("estilistas.txt", "w");
    for(int i=0; i<3; i++){
            fprintf(arquivo2, "Codigo do estilista: %d / Nome do estilista: %s / Salario: %.2f\n",estilista[i].cod_estilista, estilista[i].nome_estilista, estilista[i].salario);
    }
    fclose(arquivo2);

    FILE *arquivo3;
    arquivo3 = fopen("roupas.txt","w");
    for(int i=0; i<5; i++){
        fprintf(arquivo3, "Codigo da roupa: %d / Descricao: %s / Codigo do estilista: %d / Codigo da estacao: %d\n",roupa[i].cod_roupa, roupa[i].descricao_roupa, roupa[i].cod_estilista, roupa[i].cod_estacao);
    }
    fclose(arquivo3);

    FILE *arquivo4;
    arquivo4 = fopen("relatorio.txt","w");
    int x;
    printf("Digite o codigo da estacao que voce quer analisar: ");
    scanf("%d",&x);

    for(int i=0; i<5;i++){
        if(roupa[i].cod_estacao == x){
            for(int j=0; j<3; j++){
                if(roupa[i].cod_estilista == estilista[j].cod_estilista){
                    fprintf(arquivo4, "Codigo da roupa: %d / Descricao: %s / Codigo do estilista: %d / Codigo da estacao: %d / Nome do estilista: %s\n",roupa[i].cod_roupa, roupa[i].descricao_roupa, roupa[i].cod_estilista, roupa[i].cod_estacao, estilista[i].nome_estilista);
                }
            }
        }
    }
    fclose(arquivo4);
}

int main()
{
    Estacao estacao[2];
    cadastrar_estacao(estacao);
    Estilista estilista[3];
    cadastrar_estilista(estilista);
    Roupa roupa[5];
    cadastrar_roupa(roupa);
    gravar(estacao, estilista, roupa);
}
