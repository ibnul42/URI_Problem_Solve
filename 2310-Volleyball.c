#include<stdio.h>
int main()
{
    int n,i,a,b,c,x,y,z;
    double sumA=0,sumB=0,sumC=0,sumX=0,sumY=0,sumZ=0;
    char ch[10],per='%';
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%s",&ch);
        scanf("%d%d%d",&a,&b,&c);
        sumA += a;
        sumB += b;
        sumC += c;
        scanf("%d%d%d",&x,&y,&z);
        sumX += x;
        sumY += y;
        sumZ += z;
    }
    double service,block,attack;
    service = (sumX/sumA)*100;
    block =(sumY/sumB)*100;
    attack = (sumZ/sumC)*100;
    printf("Pontos de Saque: %.2lf %c.\n",service,per);
    printf("Pontos de Bloqueio: %.2lf %c.\n",block,per);
    printf("Pontos de Ataque: %.2lf %c.\n",attack,per);

    return 0;
}
