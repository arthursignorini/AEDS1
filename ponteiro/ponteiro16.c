#include<stdio.h>

float array (float *p){
    for(int i=0; i<10;i++,p++){
        printf("\n%p",p);
    }
}

int main(){
    float vet[10];

    float *p = vet;

    array(p);
}
