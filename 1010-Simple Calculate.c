#include<stdio.h>
int main(){
    int code_pro1,unit_pro1,code_pro2,unit_pro2;
    float price1,price2,amount;
    scanf("%d%d%f%d%d%f",&code_pro1,&unit_pro1,&price1,&code_pro2,&unit_pro2,&price2);
    amount=(unit_pro1*price1)+(unit_pro2*price2);
    printf("VALOR A PAGAR: R$ %.2f\n",amount);

return 0;
}
