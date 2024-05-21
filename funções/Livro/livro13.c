#include<stdio.h>
void dados (int pop, int salario[], int anos[]){
    for(int i=0; i<pop; i++){
        printf("Digite o salario: ");
        scanf("%d",&salario[i]);
        printf("Digite a sua idade: ");
        scanf("%d", &anos[i]);
    }
}

float media (int pop, int salario[]){
    int soma = 0;
    for(int i=0; i<pop; i++){
        soma += salario[i];
    }
    float conta = (float) soma / pop;
    return conta;
}

int maioridade(int pop, int anos[] ){
    int maior = anos[0];
    for(int i=0; i<pop; i++){
        if(anos[i] > maior){
            maior = anos[i];
        }
    }
    return maior;
}

int menoridade(int pop, int anos[pop]){
    int menor = anos[0];
    for(int i=0; i<pop; i++){
        if(anos[i] < menor){
            menor = anos[i];
        }
    }
    return menor;
}
int main()
{
    int pop;
    printf("Digite o numero de habitantes: ");
    scanf("%d",&pop);

    int salario[pop];
    int anos[pop];
    dados(pop,salario, anos);

    printf("A media de salario eh .%2f\n",media(pop, salario));
    printf("A maior idade eh %d\n",maioridade(pop, anos));
    printf("A menor idade eh %d\n",menoridade(pop, anos));
}
