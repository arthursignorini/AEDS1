#include<stdio.h>

float volume(int r){

    float vol = (4.0/3.0) * 3.14 * (pow(r,3));
    return vol;
}
int main()
{
    int r;
    printf("Digite o raio: ");
    scanf("%d",&r);
    printf("O volume eh %.2f",volume(r));
}
