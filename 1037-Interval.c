#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    if(x<0 || x>100)
        printf("Fora de intervalo\n");
    else{
            printf("Intervalo ");
        if(x<=25)
        printf("[0,25]\n");
    else if(x<=50)
        printf("(25,50]\n");
    else if(x<=75)
        printf("(50,75]\n");
    else
        printf("(75,100]\n");
    }

    return 0;
}
