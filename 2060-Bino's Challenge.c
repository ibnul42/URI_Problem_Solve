#include<stdio.h>
int main()
{
    int n,i,a[4],j,count;
    scanf("%d",&n);
    int inp[n];
    for(i=0;i<n;i++)
        scanf("%d",&inp[i]);
    for(j=2;j<=5;j++){
            count=0;
        for(i=0;i<n;i++){
            if(inp[i]%j==0)
            count++;
        }
    printf("%d Multiplo(s) de %d\n",count,j);
    }

    return 0;
}
