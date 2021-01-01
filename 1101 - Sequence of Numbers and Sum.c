#include<stdio.h>
int main()
{
    int n,i,j,sum=0,x,y,k=0;
    int a[100],b[100];
    for(i=0;;i++)
    {
        scanf("%d%d",&x,&y);
        if(x<=0 || y<=0)
            break;
        a[i] = x;
        b[i] = y;
        k++;
    }
    for(i=0;i<k;i++)
    {
      if(a[i]<b[i])
      {
          for(j=a[i];j<=b[i];j++){
                printf("%d ",j);
            sum += j;
          }
          printf("Sum=%d\n",sum);
      }
    else
      {
          for(j=b[i];j<=a[i];j++){
                printf("%d ",j);
            sum += j;
          }
          printf("Sum=%d\n",sum);
      }
      sum = 0;
    }

    return 0;
}

