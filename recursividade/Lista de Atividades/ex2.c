#include<stdio.h>

int contar(int num, int soma){

    if(num ==0){
        return soma;
    } else {
        soma+= num%10;
        return contar(num/10,soma);
    }
}


int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    printf("A soma de seus digitos eh %d",contar(num, 0));

}

