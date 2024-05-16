#include<stdio.h>
void ordem(int *x, int*y, int*z)
{
    int vet[3] = {*x,*y,*z};
    int temp;
    for(int i=0; i<3 - i;i++){
        for(int j=0; j<3-i-1;j++){
            if(vet[j] > vet[j +1]){
                temp = vet[j+1];
                vet[j+1] = vet[j];
                vet[j] = temp;
            }
        }
    }
    *x = vet[0];
    *y = vet[1];
    *z = vet[2];
}
int main(){
    int x,y,z;
    printf("Digite um valor: ");
    scanf("%d",&x);
    printf("Digite um valor: ");
    scanf("%d",&y);
    printf("Digite um valor: ");
    scanf("%d",&z);
    ordem(&x,&y,&z);
    printf("O maior eh %d, o do meio eh %d e o menor eh %d",z,y,x);

}
