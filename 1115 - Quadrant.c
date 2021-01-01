#include<stdio.h>
int main()
{
    int x,y,i=0,a[100],b[100],j;
    for(i=0;;i++)
    {
        scanf("%d %d",&x,&y);
        if(x == 0 || y == 0)
            break;
        else{
        a[i] = x;
        b[i] = y;
        }
    }
    for(j=0;j<i;j++)
    {
        if(a[j]>0 && b[j]>0)
            printf("primeiro\n");
        else if(a[j]>0 && b[j]<0)
            printf("quarto\n");
        else if(a[j]<0 && b[j]<0)
            printf("terceiro\n");
        else
            printf("segundo\n");
    }

    return 0;
}

