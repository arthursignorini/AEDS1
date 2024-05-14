#include<stdio.h>
int main(){
    int a = 10;
    int b = 5;

    int *p = &a;
    int *ptr = &b;

    printf("%p",&p);
    printf("\n%p",&ptr);

    if(p > ptr){
        printf("\n%d",*p);
    } else {
        printf("\n%d",*ptr);
    }
}
