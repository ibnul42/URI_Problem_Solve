#include<stdio.h>
int main()
{
    int t1,t2,t3,t4,sum;
    scanf("%d%d%d%d",&t1,&t2,&t3,&t4);
    if(t1==3)
        sum = t2+t3+t4;
    else
        sum = t2+t3+t4+(t1-3);
    printf("%d\n",sum);

    return 0;
}
