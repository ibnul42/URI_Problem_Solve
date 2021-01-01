#include<stdio.h>
int main()
{
    int s,t,f,sum;
    scanf("%d%d%d",&s,&t,&f);
    sum = s+t+f;
    if(sum>24)
        printf("%d\n",sum-24);
    else if(sum==24)
        printf("%d\n",0);
    else if(sum<0)
        printf("%d\n",24+sum);
    else
        printf("%d\n",sum);

    return 0;
}
