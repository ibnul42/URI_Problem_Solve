#include<stdio.h>
int main()
{
    int x,alco=0,gas=0,diesel=0;
    while(x!=4){
        scanf("%d",&x);
        if(x==1)
            alco++;
        else if(x==2)
            gas++;
        else if(x==3)
            diesel++;
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alco,gas,diesel);

    return 0;
}
