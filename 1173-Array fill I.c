#include<stdio.h>
int main()
{
    int n,i,a[10];
    scanf("%d",&n);
    for(i=0;i<10;i++){
        a[i] = n;
        printf("N[%d] = %d\n",i,a[i]);
        n *= 2;
    }

    return 0;
}
