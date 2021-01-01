#include<stdio.h>
int main()
{
    int n,i,max,swap;
    while(scanf("%d",&n)!=EOF)
    {
        max = 0;
        int a[n];
        for(i=0;i<n;i++){
                scanf("%d",&a[n]);
                if(a[n]>max)
                    max=a[n];
        }
        if(max<10)
            printf("1\n");
        else if(max<20)
            printf("2\n");
        else
            printf("3\n");
    }

    return 0;
}
