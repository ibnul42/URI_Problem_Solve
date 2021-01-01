#include<stdio.h>
int main()
{
    int sHour,sMin,fHour,fMin,hour,minute;
    scanf("%d%d%d%d",&sHour,&sMin,&fHour,&fMin);
    if(sHour==fMin){
        if(sMin==fMin){
            hour = 24;
            minute = 0;
        }
        else if(sMin>fMin){
            hour = 23;
            minute = (60-sMin)+fMin;
        }
        else if(sMin<fMin){
            hour = 0;
            minute = fMin-sMin;
        }
    }
    else if(sHour>fHour){
        if(sMin==fMin){
            hour = (24-sHour)+fHour;
            minute = 0;
        }
        else if(sMin>fMin){
            hour = (24-sHour)+fHour-1;
            minute = (60-sMin)+fMin;
        }
        else if(sMin<fMin){
            hour = (24-sHour)+fHour;
            minute = fMin-sMin;
        }
    }
    else if(sHour<fHour){
            if(sMin==fMin){
                hour = fHour-sHour;
                minute = 0;
            }
            else if(sMin>fMin){
                hour = fHour-sHour-1;
                minute = (60-sMin)+fMin;
            }
            else if(sMin<fMin){
                hour = fHour-sHour;
                minute = fMin-sMin;
            }
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minute);

    return 0;
}
