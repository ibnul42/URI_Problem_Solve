#include<stdio.h>
int main()
{
    int n,i,a[100];
    a[0]=0;
    a[1]=1;
    scanf("%d",&n);
    for(i=2;i<n;i++){
        a[i]=a[i-2]+a[i-1];
    }
    printf("%d",a[0]);
    for(i=1;i<n;i++){
        printf(" %d",a[i]);
    }
    printf("\n");

    return 0;
}
