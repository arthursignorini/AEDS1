#include <stdio.h>
#include <stdlib.h> // Para malloc e free

int* multi(int vet[])
{
    int* vet2 = (int*)malloc(5 * sizeof(int)); 
    
    for(int i = 0; i < 5; i++) {
        int x = 1; 
        for(int j = 0; j < 5; j++) {
            if(j != i) {
                x *= vet[j]; 
            }
        }
        vet2[i] = x;
    }
    
    return vet2; 

int main()
{
    int vet[5];
    for(int i = 0; i < 5; i++) {
        scanf("%d", &vet[i]);
    }
    
   
    int* vet2 = multi(vet);

 
    for(int i = 0; i < 5; i++) {
        printf("%d ", vet2[i]); 
    }
    printf("\n"); 

    free(vet2); 

    return 0;
}
