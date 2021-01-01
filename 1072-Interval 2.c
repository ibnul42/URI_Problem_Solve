#include<stdio.h>
int main()
{
    int n,i,in=0,out=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(a[i]>=10 && a[i]<=20)
            in++;
        else
            out++;
    }
    printf("%d in\n%d out\n",in,out);

    return 0;
}
