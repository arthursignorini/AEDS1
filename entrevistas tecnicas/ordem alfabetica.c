#include <stdio.h>
#include <string.h>

#define TAM 100

int main() {
    char string[TAM];
    fgets(string, TAM, stdin);
    string[strcspn(string, "\n")] = 0;  

    int n = strlen(string);
    char temp;

 
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if(string[j+1] < string[j]) {
                temp = string[j+1];
                string[j+1] = string[j];
                string[j] = temp;
            }
        }
    }

    printf("%s\n", string);
    return 0;
}
