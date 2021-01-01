#include<stdio.h>
int main()
{
    int a[100],n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=2;j<a[i];j++){
            if(a[i]%j==0){
                k++;
                break;
            }
        }
        if(k==0)
            printf("%d eh primo\n",a[i]);
        else
            printf("%d nao eh primo\n",a[i]);
    }

    return 0;
}
