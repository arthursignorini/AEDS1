#include<stdio.h>
void conceito(int *p,int n)
{
    for(int i=0; i<n; i++){
        printf("\nDigite a sua media: ");
        scanf("%d",&p[i]);
        if(p[i] <40){
            printf("\nF");
        }
        if(p[i] > 39 && p[i]<60){
            printf("\nE");
        }
        if(p[i] > 59 && p[i] < 70){
            printf("\nD");
        }
        if(p[i] > 69 && p[i] < 80){
            printf("\nC");
        }
        if(p[i] > 79 && p[i] < 90){
            printf("\nB");
        }
        if(p[i] > 89){
            printf("\nA");
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Numero de alunos: ");
    scanf("%d",&n);
    int *p = (int*)malloc(n*sizeof(int));
    conceito(p,n);
}
