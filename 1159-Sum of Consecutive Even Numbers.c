#include<stdio.h>
int main()
{
    int n,sum,i,j;
    for(i=1;i!=0;i++){
        sum=0;
        scanf("%d",&n);
        if(n==0)
        break;
    for(j=0;j<5;j++){
        if(n%2!=0)
            n+=1;
        sum+=n;
        n+=2;
    }
    printf("%d\n",sum);
    }

    return 0;
}
