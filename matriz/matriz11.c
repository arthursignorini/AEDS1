#include<stdio.h>
int main(){
    int vetor[8], codigo[5], matriz[8][5];

   for(int i=0; i<8; i++){
     printf("Digite a sua idade: ");
    scanf("%d",&vetor[i]);
   }
   for(int i=0; i<5; i++){
    printf("Digite o codigo da disciplina: ");
    scanf("%d",&codigo[i]);
   }

   for(int i=0; i<8; i++){
        for(int j=0; j<5; j++){
            printf("Digite quantas provas o aluno %d fez de cada materia %d: ",i,codigo[j]);
            scanf("%d",&matriz[i][j]);
        }
   }

    for(int i=0; i<8; i++){
        for(int j=0; j<5; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
   }

}
