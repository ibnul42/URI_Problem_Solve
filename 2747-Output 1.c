#include<stdio.h>
int main()
{
    int i,j;
    char ch='-',ch2='|';
    for(i=0;i<39;i++)
        printf("%c",ch);
    printf("\n");
    for(j=0;j<5;j++){
    for(i=0;i<39;i++)
    {
        if(i==0 || i==38)
            printf("%c",ch2);
        else
            printf(" ");
    }
    printf("\n");
    }

    for(i=0;i<39;i++)
        printf("%c",ch);
    printf("\n");

    return 0;
}
