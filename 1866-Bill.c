#include<stdio.h>
int main()
{
    int n,i,j,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i] = 0;
        scanf("%d",&x);
        for(j=1;j<=x;j++){
            if(j%2==1)
                a[i] += 1;
            else
                a[i] += -1;
        }
    }
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);

    return 0;
}
