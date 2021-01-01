#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
        printf(" %d",i*i);
        printf(" %d",i*i*i);
                printf("\n");
    }

    return 0;
}
