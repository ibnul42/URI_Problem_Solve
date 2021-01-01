#include<stdio.h>
int main()
{
    int a,n,i,sum=0,k;
    scanf("%d%d",&a,&n);
    while(n<=0)
        scanf("%d",&n);
    for(i=0,k=a;i<n;i++){
        sum += k;
        k++;
    }
    printf("%d\n",sum);

    return 0;
}
