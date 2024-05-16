#include <stdio.h>
int main()
{
int x, *p, **q; // Q é um ponteiro de ponteiro
p = &x;
q = &p;
x = 10;
printf("\n%d\n", **q); // Essa mudança faz com que seja possivel acessar o valor armazenado pela variavel que p aponta, uma vez que q é um ponteiro de ponteiro
return(0);
}

