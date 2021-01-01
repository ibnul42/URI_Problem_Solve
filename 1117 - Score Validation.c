#include<stdio.h>
int main()
{
    int i,n=0,k=0;
    float a,sum=0.0;
    for(i=0;;i++){
        scanf("%f",&a);
    if(a>=0 && a<=10){
        sum += a;
        n++;
        if(n==2)
            break;
    }
    else
    k++;
    }
    for(i=0;i<k;i++)
            printf("nota invalida\n");
    printf("media = %.2f\n",sum/2);

    return 0;
}

