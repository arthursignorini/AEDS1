#include<stdio.h>

void soma (int a,int b){
    a = a + b;
    printf("A soma eh %d",a);
}

int main() {

    int a = 10;
    int b = 5;

    soma(a,b);

}
