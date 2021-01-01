#include<stdio.h>
int main(){
    char name;
    double salary=1,sales=12,total;
    scanf("%s%lf%lf",&name,&salary,&sales);
    total=salary+(sales*15/100);
    printf("TOTAL = R$ %.2lf\n",total);

return 0;
}
