#include<stdio.h>
int main(){
// p++:

// Esta expressão incrementa o ponteiro p.
// Primeiro, o valor atual de p é usado na expressão (por exemplo, se p está sendo atribuído a outra variável, o valor antes do incremento é o que será atribuído), depois p é incrementado para apontar para o próximo elemento do tipo ao qual ele aponta.

int arr[3] = {10, 20, 30};
int *p = arr;
printf("%d\n", *p); // Imprime 10
p++;
printf("%d\n", *p); // Imprime 20


// (*p)++:

// Esta expressão incrementa o valor armazenado na localização de memória apontada por p.
// Primeiro, o valor apontado por p é usado na expressão, depois o valor na memória apontada por p é incrementado.
int arr[3] = {10, 20, 30};
int *p = arr;
printf("%d\n", *p); // Imprime 10
(*p)++;
printf("%d\n", *p); // Imprime 11


//*(p++):

// Esta expressão usa o valor apontado por p na posição atual e, em seguida, incrementa o ponteiro p.
// Primeiro, o valor apontado por p é usado na expressão, depois o ponteiro p é incrementado para apontar para o próximo elemento do tipo ao qual ele aponta.
int arr[3] = {10, 20, 30};
int *p = arr;
printf("%d\n", *p); // Imprime 10
printf("%d\n", *(p++)); // Imprime 10, depois p é incrementado
printf("%d\n", *p); // Imprime 20

// Resumo das Diferenças
// p++: Incrementa o ponteiro p após seu valor atual ser usado.
// (*p)++: Incrementa o valor na memória apontada por p.
// *(p++): Usa o valor apontado por p e depois incrementa o ponteiro p.

}
