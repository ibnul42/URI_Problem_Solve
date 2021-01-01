#include<stdio.h>
int main()
{
    int x=0,i=0;
    double age=0.00;
    while(x>=0){
        scanf("%d",&x);
        if(x>=0){
            age += x;
            i++;
        }
        else
            break;
    }
    if(i>0){
       age /= i;
       printf("%.2lf\n",age);
    }

    return 0;
}

