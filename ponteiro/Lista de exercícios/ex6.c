#include<stdio.h>

int main()
{
// CÓDIGO 1 - acrescenta 1 no valor de ptr e o printa no final
int *ptr, i;
ptr = (int *) malloc(sizeof(int));
*ptr = 10;
for(i=0;i<5;i++){
*ptr=*ptr+1;
}
printf("\nptr: %d", *ptr);
free(ptr);

// CÓDIGO 2 - acrescenta 1 no endereço e o printa no final - muda o endereço cujo o ponteiro aponta
int *ptr, i;
ptr = (int *) malloc(sizeof(int));
*ptr = 10;
for(i=0;i<5;i++){
ptr=ptr+1;
}
printf("\nptr: %p", ptr);
free(ptr);

}
