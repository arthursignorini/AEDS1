#include<stdio.h>

int temp (int h, int m, int s)
{
    h = h*60*60;
    m = m * 60;
    return h + m + s;
}


int main()
{
    int h, m , s;
    printf("Digite o numero de horas, minutos e segundos: ");
    scanf("%d %d %d", &h, &m, &s);
    printf("Isso tem %d segundos no total",temp(h,m,s));
}
