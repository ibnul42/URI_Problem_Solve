#include<stdio.h>
int main()
{
    int n,i,j,a,b;
    scanf("%d",&n);
    int x[n],y[n],sum[n];
    for(i=0;i<n;i++){
            sum[i] = 0;
        scanf("%d%d",&x[i],&y[i]);
        if(x[i]>y[i]){
            a = y[i];
            b = x[i];
            for(j=a+1;j<b;j++)
                if(j%2!=0)
                sum[i] += j;
        }
        else if(x[i]<y[i]){
            a = x[i];
            b = y[i];
            for(j=a+1;j<b;j++)
                if(j%2!=0)
                sum[i] += j;

        }
        else sum[i] = 0;
    }
    for(i=0;i<n;i++)
        printf("%d\n",sum[i]);

    return 0;
}
