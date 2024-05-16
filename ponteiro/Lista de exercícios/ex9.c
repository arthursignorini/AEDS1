#include<stdio.h>
#include<math.h>

#define PI 3.14

void calcCircunferencia (float R, float *compr, float *area)
{
    *compr = 2 * PI * R;
    *area = PI * pow(R,2);
}

int main(){
    float R;

    printf("Medida do raio: ");
    scanf("%f",&R);

    float compr, area;
    calcCircunferencia(R,&compr,&area);
    printf("O comprimento eh %.2f e a area eh %.2f",compr,area);

}
