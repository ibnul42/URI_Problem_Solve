#include<stdio.h>
int main()
{
    int n,i,pro,qun;
    double price,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&pro,&qun);
        if(pro==1001)
            price = qun*1.5;
        else if(pro==1002)
            price = qun*2.5;
        else if(pro==1003)
            price = qun*3.5;
        else if(pro==1004)
            price = qun*4.5;
        else if(pro==1005)
            price = qun*5.5;
        sum += price;
    }
    printf("%.2lf\n",sum);

    return 0;
}
