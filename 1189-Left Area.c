#include<stdio.h>
int main()
{
    int i,j,k=0;
    double m[12][12],sum=0.0;
    char c[2];
    scanf("%s",&c);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++)
            scanf("%lf",&m[i][j]);
    }
    for(i=1;i<6;i++){
        for(j=0;j<i;j++){
            sum += m[i][j];
            k++;
        }
    }
    for(i=6;i<11;i++){
        for(j=0;j<11-i;j++){
            sum += m[i][j];
            k++;
        }
    }
    if(c[0]=='S')
        printf("%.1lf\n",sum);
    else if(c[0]=='M')
        printf("%.1lf\n",(sum/(k)));

    return 0;
}





