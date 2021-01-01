#include<stdio.h>
int main()
{
    int n,a[5],i,sum=0;
    scanf("%d",&n);
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        if(a[i]==n)
            sum++;
    }
    printf("%d\n",sum);

    return 0;
}
