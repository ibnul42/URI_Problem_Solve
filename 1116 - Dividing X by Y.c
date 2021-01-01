#include<stdio.h>
int main()
{
    int n,i;
    float x;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
        scanf("%d%d",&a[i],&b[i]);
    for(i=0;i<n;i++)
    {
        if(b[i]==0)
        printf("divisao impossivel\n");
        else
        {
            x = (float)a[i]/(float)b[i];
            printf("%.1f\n",x);
        }
    }

    return 0;
}

