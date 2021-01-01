#include<stdio.h>
int main()
{
    double i,j,k,pi=3.14159;
    scanf("%lf%lf%lf",&i,&j,&k);
    double triangle_area,radiuss_circle,trapizium,square,rectangle;
    triangle_area = (i*k)/2;
    radiuss_circle = pi*k*k;
    trapizium = 1.0/2*(i+j)*k;
    square = j*j;
    rectangle = i*j;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangle_area,radiuss_circle,trapizium,square,rectangle);
    return 0;
}
