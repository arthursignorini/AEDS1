#include<stdio.h>

int contar (int x, int y, char str1[], char str2[])
{
    int cont = 0;
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            if(str1[i]== str2[j]){
                cont++;
            }
        }
    }
    return cont;
}

int main()
{
    char str1[50];
    fgets(str1, 50, stdin);

    char str2[50];
    fgets(str2, 50, stdin);

    int tam1 = strlen(str1);
    int tam2 = strlen (str2);

    int result = contar(tam1, tam2, str1, str2);
    printf("%d",result);
}

