#include<stdio.h>
int main()
{
    int x,y;
    float fuel_needed;
    scanf("%d%d",&x,&y);
    fuel_needed = (x*y)/12.000;
    printf("%.3f\n",fuel_needed);

    return 0;
}
