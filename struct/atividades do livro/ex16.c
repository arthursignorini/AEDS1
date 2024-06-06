#include <stdio.h>
#include<string.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    int num_tombo;
    int num_exemplar[3];
    Data data;
} Obra;

typedef struct
{
    int num_tombo;
    char nome_obra[50];
    char nome_autor[50];
    char nome_editora[50];
    int cod_area;
} Tombo;

void cadastrar_tombo(Tombo tombo[])
{
    for(int i=0; i<20; i++){
        printf("Digite o numero do tombo: ");
        scanf("%d",&tombo[i].num_tombo);
        getchar();
        printf("Digite o nome da obra: ");
        fgets(tombo[i].nome_obra, 50, stdin);
        printf("Digite o nome do autor: ");
        fgets(tombo[i].nome_autor, 50, stdin);
        printf("Digite o nome da editora: ");
        fgets(tombo[i].nome_editora, 50, stdin);
        printf("Digite o codigo da area (1-exatas, 2-humanas, 3-biomedicas): ");
        scanf("%d",&tombo[i].cod_area);
        getchar();
        printf("\n");
    }
}

void cadastrar_obra(Obra obra[], int tam)
{
    int exe;
    for(int i=0; i<tam; i++){
        printf("Digite o numero do tombo: ");
        scanf("%d",&obra[i].num_tombo);
        printf("Digite quantos exemplares: ");
        scanf("%d",&exe);
        if(exe > 3){
            printf("Voce so pode usar no maximo 3 exemplares");
            exe = 3;
        }
        for(int j=0; j<exe; j++){
            printf("Digite o numero do exemplar: ");
            scanf("%d",&obra[i].num_exemplar[j]);
        }
        printf("Digite a data da compra (dia mes ano: ");
        scanf("%d %d %d",&obra[i].data.dia, &obra[i].data.mes, &obra[i].data.ano);
        getchar();
        printf("\n");
    }
}

void obra_area(Obra obra[], Tombo tombo[], int tam)
{
    printf("\nEXATAS\n\n");
    for(int i=0; i<tam; i++){
        for(int j=0; j<20; j++){
            if(obra[i].num_tombo == tombo[j].num_tombo){
                if(tombo[j].cod_area == 1){
                    printf("Nome da obra: %s\n",tombo[j].nome_obra);
                    printf("Nome do autor: %s\n",tombo[j].nome_autor);
                    printf("Nome da editora: %s\n",tombo[j].nome_editora);
                    printf("Data da compra: %d / %d / %d\n",obra[i].data.dia,obra[i].data.mes,obra[i].data.ano);
                    for(int t=0; t<3; t++){
                        if(obra[i].num_exemplar[t] != 0){
                            printf("Numero do exemplar %d: %d",t+1, obra[i].num_exemplar[t]);
                        }
                    }
                }
            }
        }
        printf("\n");
    }
    printf("\nHUMANAS\n\n");
    for(int i=0; i<tam; i++){
        for(int j=0; j<20; j++){
            if(obra[i].num_tombo == tombo[j].num_tombo){
                if(tombo[j].cod_area == 2){
                    printf("Nome da obra: %s\n",tombo[j].nome_obra);
                    printf("Nome do autor: %s\n",tombo[j].nome_autor);
                    printf("Nome da editora: %s\n",tombo[j].nome_editora);
                    printf("Data da compra: %d / %d / %d\n",obra[i].data.dia,obra[i].data.mes,obra[i].data.ano);
                    for(int t=0; t<3; t++){
                        if(obra[i].num_exemplar[t] != 0){
                            printf("Numero do exemplar %d: %d",t+1, obra[i].num_exemplar[t]);
                        }
                    }
                }
            }
        }
    }
    printf("\BIOLOGICAS\n\n");
    for(int i=0; i<tam; i++){
        for(int j=0; j<20; j++){
            if(obra[i].num_tombo == tombo[j].num_tombo){
                if(tombo[j].cod_area == 3){
                    printf("Nome da obra: %s\n",tombo[j].nome_obra);
                    printf("Nome do autor: %s\n",tombo[j].nome_autor);
                    printf("Nome da editora: %s\n",tombo[j].nome_editora);
                    printf("Data da compra: %d / %d / %d\n",obra[i].data.dia,obra[i].data.mes,obra[i].data.ano);
                    for(int t=0; t<3; t++){
                        if(obra[i].num_exemplar[t] != 0){
                            printf("Numero do exemplar %d: %d",t+1, obra[i].num_exemplar[t]);
                        }
                    }
                }
            }
        }
    }
}

void obra_autor(Obra obra[], Tombo tombo[], int tam) {
    for (int i = 0; i < tam; i++) {
        for (int t = 0; t < tam; t++) {
            if (strcmp(tombo[i].nome_autor, tombo[t].nome_autor) == 0) {
                printf("%s\n", tombo[i].nome_autor);
                for (int j = 0; j < tam; j++) {
                    if (tombo[i].num_tombo == obra[j].num_tombo) {
                        printf("Nome da obra: %s\n", tombo[i].nome_obra);
                        printf("Nome do autor: %s\n", tombo[i].nome_autor);
                        printf("Nome da editora: %s\n", tombo[i].nome_editora);
                        printf("Data da compra: %d / %d / %d\n", obra[j].data.dia, obra[j].data.mes, obra[j].data.ano);
                        for (int x = 0; x < 3; x++) {
                            if (obra[j].num_exemplar[x] != 0) {
                                printf("Numero do exemplar %d: %d\n", x + 1, obra[j].num_exemplar[x]);
                            }
                        }
                    }
                }
            }
        }
    }
}

void obra_editora(Obra obra[], Tombo tombo[], int tam)
{
     for (int i = 0; i < tam; i++) {
        for (int t = 0; t < tam; t++) {
            if (strcmp(tombo[i].nome_editora, tombo[t].nome_editora) == 0) {
                printf("%s\n", tombo[i].nome_editora);
                for (int j = 0; j < tam; j++) {
                    if (tombo[i].num_tombo == obra[j].num_tombo) {
                        printf("Nome da obra: %s\n", tombo[i].nome_obra);
                        printf("Nome do autor: %s\n", tombo[i].nome_autor);
                        printf("Data da compra: %d / %d / %d\n", obra[j].data.dia, obra[j].data.mes, obra[j].data.ano);
                        for (int x = 0; x < 3; x++) {
                            if (obra[j].num_exemplar[x] != 0) {
                                printf("Numero do exemplar %d: %d\n", x + 1, obra[j].num_exemplar[x]);
                            }
                        }
                    }
                }
            }
        }
    }
}


int main() {
    int opcao;
    int tam;
    printf("Digite quantas obras: ");
    scanf("%d",&tam);
    Obra obra[tam];
    Tombo tombo[20];

    do {
        printf("\nMenu de Opções:\n");
        printf("1. Cadastrar tombos.\n");
        printf("2. Cadastrar obras.\n");
        printf("3. Mostrar obras por área.\n");
        printf("4. Mostrar obras por autor.\n");
        printf("5. Mostrar obras por editora.\n");
        printf("6. Encerrar o programa.\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                cadastrar_tombo(tombo);
                break;
            case 2:
                cadastrar_obra(obra, tam);
                break;
            case 3:
                obra_area(obra, tombo, tam);
                break;
            case 4:
                obra_autor(obra, tombo, tam);
                break;
            case 5:
                obra_editora(obra, tombo, tam);
                break;
            case 6:
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while(opcao != 6);

    return 0;
}

