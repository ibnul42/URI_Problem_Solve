#include<stdio.h>
int main()
{
    int i,j;
    double m[12][12],sum=0.0;
    char c[2];
    scanf("%s",&c);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++)
            scanf("%lf",&m[i][j]);
    }
    for(i=1;i<12;i++)
    {
        for(j=0;j<i;j++){
            sum+=m[i][j];
        }
    }
    if(c[0]=='S')
    printf("%.1lf\n",sum);
    else if(c[0]=='M'){
        sum=sum/66;
        printf("%.1lf\n",sum);
    }

    return 0;
}

