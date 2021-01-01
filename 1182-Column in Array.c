#include<stdio.h>
int main()
{
    int n,i,j;
    double m[12][12],sum=0.0;
    char c[2];
    scanf("%d%s",&n,&c);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++)
            scanf("%lf",&m[i][j]);
    }
    for(i=0;i<12;i++)
        sum+=m[i][n];
    if(c[0]=='S')
    printf("%.1lf\n",sum);
    else if(c[0]=='M'){
        sum=sum/12;
        printf("%.1lf\n",sum);
    }

    return 0;
}
