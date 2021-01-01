#include<stdio.h>
int main()
{
    int a[5],even=0,odd=0,positive=0,negative=0,i;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++){
        if(a[i]%2==0)
            even++;
        if(a[i]%2!=0)
            odd++;
        if(a[i]>0)
            positive++;
        if(a[i]<0)
            negative++;
    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",positive);
    printf("%d valor(es) negativo(s)\n",negative);

    return 0;
}
