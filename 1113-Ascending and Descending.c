#include<stdio.h>
int main()
{
    int x,y,i=0,a[100],b[100],j;
    while(x!=y){
        scanf("%d%d",&x,&y);
        a[i]=x;
        b[i]=y;
        i++;
        }
        for(j=0;j<i-1;j++){
            if(a[j]<b[j])
                printf("Crescente\n");
            else
                printf("Decrescente\n");
        }

    return 0;
}
