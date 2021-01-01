#include<stdio.h>
int main()
{
    double a[6];
    int i,j=0;
    for(i=0;i<6;i++)
        scanf("%lf",&a[i]);
    for(i=0;i<6;i++){
        if(a[i]>=0)
            j++;
    }
    printf("%d valores positivos\n",j);

    return 0;
}
