#include<stdio.h>
int main(){
    int number,hours;
    float salary,total;
    scanf("%d%d%f",&number,&hours,&salary);
    total=hours*salary;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n",total);

return 0;
}
