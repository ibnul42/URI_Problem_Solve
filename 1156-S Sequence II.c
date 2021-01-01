#include <stdio.h>
int main()
{
    double s=0,i,j=1,k;
    for(i=1;i<=39;i=i+2)
    {
        s = s + i/j;
        j = j+j;
    }
    printf("%.2f\n",s);

    return 0;
}

