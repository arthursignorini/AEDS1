#include<stdio.h>

int main()
{
    int n, k ,u;
    scanf("%d",&n); // n cartelas identificadas
    scanf("%d",&k); // k numeros distintos
    scanf("%d",&u); // numeros de 1 até u
    int mat[n][k];
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            scanf("%d",&mat[i][j]);
        }
    }


    int vet[u];
    for(int i=0; i<u; i++){
        scanf("%d",&vet[i]);
    }

    int cont=0;
    for(int i=0; i<n; i++){
        cont =0;
        for(int j=0; j<k; j++){
            for(int x=0; x<u; x++){
                if(vet[x] == mat[i][j]){
                    cont++;
                }
            }
        }
        if(cont == k){
            printf("%d ",i);
        }
    }
}
