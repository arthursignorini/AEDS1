#include<stdio.h>
float media()
{
    float nota,soma=0;
    int cont=0;
    for(int i=0; i<10; i++){
        printf("Digite a nota do aluno %d: ",i+1);
        scanf("%f",&nota);
        if(nota >= 6){
            soma+= nota;
            cont++;
        }
    }
    return soma / cont;
}
int main()
{
    printf("A media das notas dos alunos aprovados eh %.2f",media());
}
