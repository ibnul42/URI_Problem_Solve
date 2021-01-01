#include<stdio.h>
int main()
{
    int x,z,i,k=0,sum=0;
    scanf("%d%d",&x,&z);
    while(z<=x)
        scanf("%d",&z);
    for(i=x;sum<=z;i++){
        k++;
        sum += i;
    }
    printf("%d\n",k);

    return 0;
}
