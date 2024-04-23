#include<stdio.h>
#include<stdbool.h>
int main(){
    int x,y;

    // ANALISA SE A MATRIZ É SIMETRICA
    printf("Digite o tamanho da linha: ");
    scanf("%d",&x);
    printf("Digite o tamanho da coluna: ");
    scanf("%d",&y);

    int m[x][y], m2[y][x];

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf("Digite um valor para a linha %d coluna %d: ",i,j);
            scanf("%d",&m[i][j]);

            m2[j][i] = m[i][j];
        }
    }
    printf("\n\nMATRIZ NORMAL\n\n");
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

    printf("\n\nMATRIZ TRANSPOSTA\n\n");
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            printf("%d\t",m2[i][j]);
        }
        printf("\n");
    }


    bool simetrica = true;
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            if(m[i][j] != m2[i][j]) {
                simetrica = false;
                break;  // Se encontrar um elemento diferente, não é simétrica
            }
        }
        if(!simetrica) {
            break;
        }
    }

    if(simetrica){
        printf("\n\nA matriz eh simetrica");
    } else {
        printf("\n\nA matriz nao eh simetrica");
    }

}
