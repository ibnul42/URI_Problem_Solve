#include<stdio.h>
int main()
{
    int x,i,n=1;
    while(n!=0)
    {
        scanf("%d",&x);
        n=x;
        for(i=1;i<=x;i++){
            printf("%d",i);
            if(i<x)
                printf(" ");
            else
                printf("\n");
        }
    }

    return 0;
}
