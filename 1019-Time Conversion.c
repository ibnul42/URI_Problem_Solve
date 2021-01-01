#include<stdio.h>
int main(){
    int N,hours,minutes;
    scanf("%d",&N);
    hours=N/3600;
    N=N%3600;
    minutes=N/60;
    N=N%60;
    printf("%d:%d:%d\n",hours,minutes,N);

return 0;
}
