#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float cachorro=4.00,salada=4.50,bacon=5.00,torrada=2.00,refrugeranate=1.50;
    if(x==1){
        y=(float)y;
    cachorro=cachorro*y;
    printf("Total: R$ %.2f\n",cachorro);
    }
    else if (x==2){
        y=(float)y;
        salada=salada*y;
    printf("Total: R$ %.2f\n",salada);
    }
    else if (x==3){
        y=(float)y;
    bacon=bacon*y;
    printf("Total: R$ %.2f\n",bacon);
    }
    else if (x==4){
        y=(float)y;
    torrada=torrada*y;
    printf("Total: R$ %.2f\n",torrada);
    }
    else{
        y=(float)y;
    refrugeranate=refrugeranate*y;
    printf("Total: R$ %.2f\n",refrugeranate);
    }



    return 0;
}
