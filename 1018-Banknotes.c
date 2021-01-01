#include<stdio.h>
int main()
{
    int N,note_100,note_50,note_20,note_10,note_5,note_2,note_1;
    scanf("%d",&N);
    printf("%d\n",N);
    0 < N < 1000000;
    note_100=N/100;
    N = N%100;
    note_50=N/50;
    N = N%50;
    note_20=N/20;
    N = N%20;
    note_10=N/10;
    N = N%10;
    note_5=N/5;
    N = N%5;
    note_2=N/2;
    N = N%2;
    note_1=N;
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",note_100,note_50,note_20,note_10,note_5,note_2,note_1);

    return 0;
}
