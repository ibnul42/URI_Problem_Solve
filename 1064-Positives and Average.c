#include<stdio.h>
int main()
{
    double a[6],sum=0;
    int i,positive=0;
    for(i=0;i<6;i++)
        scanf("%lf",&a[i]);
    for(i=0;i<6;i++){
        if(a[i]>0){
            positive++;
            sum += a[i];
        }
    }
    sum /= positive;
    printf("%d valores positivos\n%.1lf\n",positive,sum);

    return 0;
}
