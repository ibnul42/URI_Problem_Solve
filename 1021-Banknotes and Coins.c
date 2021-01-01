#include<stdio.h>
int main()
{
    double x;
    scanf("%lf",&x);
    int i = (int)x;
    int note_100 = i/100;
    i = i%100;
    int note_50 = i/50;
    i = i%50;
    int note_20 = i/20;
    i = i%20;
    int note_10 = i/10;
    i = i%10;
    int note_5 = i/5;
    i = i%5;
    int note_2 = i/2;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",note_100);
    printf("%d nota(s) de R$ 50.00\n",note_50);
    printf("%d nota(s) de R$ 20.00\n",note_20);
    printf("%d nota(s) de R$ 10.00\n",note_10);
    printf("%d nota(s) de R$ 5.00\n",note_5);
    printf("%d nota(s) de R$ 2.00\n",note_2);
    int coin_1 = i%2;
    int a = x*100;
    a = a%100;
    int coin_50 = a/50;
    a = a%50;
    int coin_25 = a/25;
    a = a%25;
    int coin_10 = a/10;
    a = a%10;
    int coin_05 = a/5;
    int coin_01 = a%5;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",coin_1);
    printf("%d moeda(s) de R$ 0.50\n",coin_50);
    printf("%d moeda(s) de R$ 0.25\n",coin_25);
    printf("%d moeda(s) de R$ 0.10\n",coin_10);
    printf("%d moeda(s) de R$ 0.05\n",coin_05);
    printf("%d moeda(s) de R$ 0.01\n",coin_01);

    return 0;
}
