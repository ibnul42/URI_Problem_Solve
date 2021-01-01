#include<stdio.h>
int main()
{
    char a=':',b=')',c='(';
    int x,y,z,i,j,k,l;
    scanf("%d%d%d",&x,&y,&z);
    i = x-y;
    j = y-x;
    k = y-z;
    l = z-y;
    if(x>y){
    if(y<z || y==z)
        printf("%c%c\n",a,b);
    else if(y>z && k<i)
        printf("%c%c\n",a,b);
    else if(y>z && k>=i)
        printf("%c%c\n",a,c);
    }
    else if(x<y){
    if(z<y || y==z)
        printf("%c%c\n",a,c);
    else if(y<z && l<j)
        printf("%c%c\n",a,c);
    else if(y<z && l>=j)
        printf("%c%c\n",a,b);
    }

    else if(x==y){
        if(y<z)
            printf("%c%c\n",a,b);
        else
            printf("%c%c\n",a,c);
    }

    return 0;
}
