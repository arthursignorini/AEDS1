#include<stdio.h>
int main(){
    int a = 1;
    float b = 2.0;
    char c = 'a';

    int *pa = &a;
    float *pb = &b;
    char *pc = &c;

    printf("%d\n",a);
    printf("%.2f\n",b);
    printf("%c\n",c);

    *pa = 10;
    *pb = 2.5;
    *pc = 'A';

    printf("%d\n",a);
    printf("%.2f\n",b);
    printf("%c\n",c);
}
