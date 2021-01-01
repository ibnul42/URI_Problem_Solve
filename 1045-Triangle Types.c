#include<stdio.h>
int main()
{
    double a,b,c,x[3],swap,k,l;
    int i,j;
    scanf("%lf%lf%lf",&a,&b,&c);
    {
    x[0]=a;
    x[1]=b;
    x[2]=c;
    for(i=0;i<3;i++){
        for(j=0;j<3-i-1;j++){
            if(x[j]>x[j+1]){
                swap = x[j];
                x[j] = x[j+1];
                x[j+1] = swap;
            }
        }
    }
    a=x[2];
    b=x[1];
    c=x[0];
    }
    {
        k = a*a;
        l = (b*b)+(c*c);

        if(a>=(b+c))
        printf("NAO FORMA TRIANGULO\n");
    else if(k==l)
        printf("TRIANGULO RETANGULO\n");
    else if(k>l)
            printf("TRIANGULO OBTUSANGULO\n");
    else if(k<l)
            printf("TRIANGULO ACUTANGULO\n");
    }
    {
    if((a==b) && (a==c))
        printf("TRIANGULO EQUILATERO\n");
    else if((a==b) || (a==c) || (b==c))
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
