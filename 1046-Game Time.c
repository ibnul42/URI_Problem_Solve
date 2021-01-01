#include<stdio.h>
int main(){
    int start,end,time;
    scanf("%d%d",&start,&end);
    if(start==end)
        time=24;
    else if(start<end)
        time=end-start;
    else
        time=(24-start)+end;
    printf("O JOGO DUROU %d HORA(S)\n",time);

return 0;
}
