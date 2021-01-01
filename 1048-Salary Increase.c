#include<stdio.h>
int main()
{
    int i;
    float n,tSalary,bonus;
    char c='%';
    scanf("%f",&n);
    if(n<=400){
        i = 15;
        tSalary = n+(n*0.15);
        bonus = tSalary - n;
    }
    else if(n<=800){
        i = 12;
        tSalary = n+(n*0.12);
        bonus = tSalary - n;
    }
    else if(n<=1200){
        i = 10;
        tSalary = n+(n*0.10);
        bonus = tSalary - n;
    }
    else if(n<=2000){
        i = 7;
        tSalary = n+(n*0.07);
        bonus = tSalary - n;
    }
    else{
        i = 4;
        tSalary = n+(n*0.04);
        bonus = tSalary - n;
    }
    printf("Novo salario: %.2f\n",tSalary);
    printf("Reajuste ganho: %.2f\n",bonus);
    printf("Em percentual: %d %c\n",i,c);

    return 0;
}
