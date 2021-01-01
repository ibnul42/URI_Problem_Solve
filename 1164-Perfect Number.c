#include<stdio.h>
int main()
{
    int x,i,j,sum,k;
    scanf("%d",&i);
    for(j=0;j<i;j++){
        scanf("%d",&x);
        sum=0;
        for(k=1;k<x;k++){
            if(x%k==0)
            sum += k;
        }
        if(sum==x)
            printf("%d eh perfeito\n",x);
        else
        printf("%d nao eh perfeito\n",x);
    }

    return 0;
}
