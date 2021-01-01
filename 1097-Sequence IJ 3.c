#include<stdio.h>
int main()
{
    int i,j,n=7;
    for(i=1;i<=9;i+=2)
    {
        for(j=n;j>=n-2;j-=1){
            printf("I=%d J=%d\n",i,j);
        }
        n += 2;
    }

    return 0;
}
