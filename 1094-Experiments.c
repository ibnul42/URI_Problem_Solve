#include<stdio.h>
int main()
{
    int n,i,x,total=0,rabbit=0,rat=0,frog=0;
    char ch,p='%';
    float a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %c",&x,&ch);
        total += x;
        if(ch=='C')
            rabbit += x;
        else if(ch=='R')
            rat += x;
        else if(ch=='S')
            frog += x;
    }
    a = (float)rabbit/(float)total*100;
    b = (float)rat/(float)total*100;
    c = (float)frog/(float)total*100;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",rabbit);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);
    printf("Percentual de coelhos: %.2f %c\n",a,p);
    printf("Percentual de ratos: %.2f %c\n",b,p);
    printf("Percentual de sapos: %.2f %c\n",c,p);

    return 0;
}
