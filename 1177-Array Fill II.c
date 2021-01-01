#include<stdio.h>
int main()
{
    int a[1000],n,i,j;
    scanf("%d",&n);
    for(i=0;i<1000;i++){
        for(j=0;j<n;j++){
            printf("N[%d] = %d\n",i,j);
            if(i==1000-1)
                break;
            if(j<n-1)
                i++;
        }
    }

    return 0;
}
