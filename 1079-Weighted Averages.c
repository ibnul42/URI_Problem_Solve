#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float x[n],y[n],z[n],avg;
    for(i=0;i<n;i++)
        scanf("%f%f%f",&x[i],&y[i],&z[i]);
    for(i=0;i<n;i++)
    {
        avg = (x[i]*2+y[i]*3+z[i]*5)/10;
        printf("%.1f\n",avg);
    }

    return 0;
}
