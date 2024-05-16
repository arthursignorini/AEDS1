#include<stdio.h>
int main(){
int valor=5;
int *valorptr;
valorptr = &valor;



valor == &valorptr; // A variável valor armazena um int e nao um endereço - FALSO
valor == *valorptr; // O conteudo apontado pelo ponteiro é o mesmo que o de valor - CORRETO
valorptr == &valor; // O endereço armazenado pelo ponteiro é o mesmo que o de valor - CORRETO
valorptr == *valor; // O endereço que o ponteiro aponta nao pode ser comparado ao conteúdo de valor e valor nao eh um vetor - FALSA
}
