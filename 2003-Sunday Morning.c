#include <stdio.h>
int main()
{
    int hour,minute;
    while(scanf("%d:%d",&hour,&minute)!=EOF)
    {
        printf("Atraso maximo: ");
        if(hour>=7)
            printf("%d\n",((((hour+1)-8))*60+minute));
        else
            printf("%d\n",0);
    }

    return 0;
}
