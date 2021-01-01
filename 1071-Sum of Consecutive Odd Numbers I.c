#include<stdio.h>
int main()
{
    int a,b,x,y,i,sum=0;
    scanf("%d%d",&a,&b);
    if(a==b)
        sum = sum;
    else if(a>b){
        x = b;
        y = a;
        for(i=x+1;i<y;i++){
            if(i%2!=0)
             sum +=i;
        }
    }
    else{
        x = a;
        y = b;
        for(i=x+1;i<y;i++){
            if(i%2!=0)
             sum +=i;
        }
    }
    printf("%d\n",sum);

    return 0;
}
