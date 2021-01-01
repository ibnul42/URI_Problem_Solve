#include<stdio.h>
int main()
{
    double sum=0,a[2],n=0;
    int i;
    while(n!=2){
        for(i=0;i<2;)
        {
            scanf("%lf",&a[i]);
            if(a[i]<0 || a[i]>10)
                printf("nota invalida\n");
            else{
                sum += a[i];
                i++;
            }
        }
        printf("media = %.2lf\n",sum/2);
        sum = 0;
        n = 0;
        while(n!=1){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%lf",&n);
            if(n==2)
                break;
        }
    }
    return 0;
}
