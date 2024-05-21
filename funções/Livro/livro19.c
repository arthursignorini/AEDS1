#include<stdio.h>
void iguais (int vet1[], int vet2[]){
    int cont = 0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(vet1[i] == vet2[j]){
                cont++;
            }
        }
    }
    int vet3[cont];
    cont = 0;
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                if(vet1[i] == vet2[j]){
                    vet3[cont] = vet1[i];
                    cont++;
                }
            }
        }

    for(int i=0; i<cont; i++){
        printf("%d ",vet3[i]);
    }
}


int main()
{
    int vet1[5], vet2[5];
    printf("VETOR1\n");
    for(int i=0; i<5; i++){
        printf("Digite um valor: ");
        scanf("%d",&vet1[i]);
    }

    printf("\nVETOR2\n");
    for(int i=0; i<5; i++){
        printf("Digite um valor: ");
        scanf("%d",&vet2[i]);
    }

    iguais(vet1, vet2);
}
