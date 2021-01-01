#include<stdio.h>
int main()
{
    int n,i,small,position=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    small = a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<small){
            small=a[i];
            position = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",small,position);

    return 0;
}
