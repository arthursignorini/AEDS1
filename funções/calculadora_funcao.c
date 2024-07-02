#include<stdio.h>
#include<stdlib.h>

int menu()
double soma(double,double);
double subtracao(double,double);
double mult(double,double);
double divisao(double,double);

int main(){
    int escolha;
    double num1,num2;
    double result;

    do {

        escolha = menu();

        if(escolha < 1 || escolha > 6){
            printf("Opcao invalida!");
        }
        switch(escolha) {


        case 1:
            printf("Digite um numero: ");
            scanf("%lf",&num1);
            printf("Digite um numero: ");
            scanf("%lf",&num2);
            result = soma(num1,num2);
            printf("\nA soma eh %lf\n",result);

            break;

        case 2:
            printf("Digite um numero: ");
            scanf("%lf",&num1);
            printf("Digite um numero: ");
            scanf("%lf",&num2);
            result = subtracao(num1,num2);
            printf("\nA subtracao eh %lf\n",result);
            break;

        case 3:
            printf("Digite um numero: ");
            scanf("%lf",&num1);
            printf("Digite um numero: ");
            scanf("%lf",&num2);
            result = mult(num1,num2);
            printf("\nA multiplicacao eh %lf\n",result);
            break;

        case 4:
            printf("Digite um numero: ");
            scanf("%lf",&num1);
            printf("Digite um numero: ");
            scanf("%lf",&num2);
            if(num2 == 0){
                printf("\nNao eh possivel fazer essa divisao");
            } else {
            result = divisao (num1,num2);
            printf("\nA divisao eh %lf\n",result);
            }
            break;
        }

    printf("\nMUITO OBRIGADO POR UTILIZAR\n");
    system("pause");
    } while (escolha != 5);
}

int menu(){
    int escolha;
    system("clear");
    printf("\nEscolha uma opcao:\n1) Soma\n2) Subtracao\n3) Multiplicacao\n4) Divisao\n5) Encerrar\n\nESCOLHA: ");
    scanf("%d",&escolha);
    return escolha;
}

double soma(double num1,double num2){
    return num1 + num2;
}

double subtracao(double num1,double num2){
    return num1 - num2;
}

double mult(double num1,double num2){
    return num1 * num2;
}

double divisao(double num1,double num2){
    return num1 / num2;
}
