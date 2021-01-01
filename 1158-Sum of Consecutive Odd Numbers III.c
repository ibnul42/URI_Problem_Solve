#include<stdio.h>
int main()
{
    int n,i,j,x,y,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        sum=0;
        if(x%2==0)
            x += 1;
        for(j=0;j<y;j++){
            sum += x;
            x += 2;
        }
        printf("%d\n",sum);
    }

    return 0;
}
