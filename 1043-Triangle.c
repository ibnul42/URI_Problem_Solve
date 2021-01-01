#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        float i = a+b+c;
        printf("Perimetro = %.1f\n",i);
    }
    else{
        float j = (1.0/2.0)*(a+b)*c;
        printf("Area = %.1f\n",j);
    }
    return 0;
}
