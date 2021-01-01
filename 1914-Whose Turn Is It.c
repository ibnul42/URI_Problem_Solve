#include<stdio.h>
int main()
{
    int n,i;
    long long int a,b,sum;
    char x[100],y[100],p[10],q[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %s %s %s",&x,&p,&y,&q);
        scanf("%lld%lld",&a,&b);
        sum = a+b;
        if(p[0]=='P'){
            if(sum%2==0)
            printf("%s\n",x);
        else
            printf("%s\n",y);
        }
        else
            if(sum%2==0)
            printf("%s\n",y);
        else
            printf("%s\n",x);
    }

    return 0;
}
