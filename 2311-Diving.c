#include<stdio.h>
int main()
{
    int n,i,j;
    double sum,a[7],highest,lowest,k;
    char ch[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum=0,highest=0,lowest=0;
        scanf("%s",&ch);
        scanf("%lf",&k);
        for(j=0;j<7;j++){
            scanf("%lf",&a[j]);
            sum += a[j];
            if(j==0){
                highest = a[j];
                lowest = a[j];
            }
            else{
                if(a[j]>highest)
                    highest = a[j];
                if(a[j]<lowest)
                    lowest = a[j];
            }
        }
        sum = sum-highest-lowest;
        printf("%s %.2lf\n",ch,(k*sum));
    }

    return 0;
}
