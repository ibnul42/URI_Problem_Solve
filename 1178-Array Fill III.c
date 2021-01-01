#include<stdio.h>
int main()
{
    double x,N[100];
    int i;
    scanf("%lf",&x);
    N[0]=x;
    for(i=0;i<100;i++){
        printf("N[%d] = %.4lf\n",i,N[i]);
        N[i+1] = N[i]/2;
    }

    return 0;
}
