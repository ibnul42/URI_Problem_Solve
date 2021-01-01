#include<stdio.h>
int main()
{
    long long int num;
    scanf("%llu",&num);
    while(num!=0){
        printf("%llu",num%10);
        num /= 10;
        if(num==0)
            printf("\n");
    }

    return 0;
}
