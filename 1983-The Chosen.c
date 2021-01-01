#include<stdio.h>
int main()
{
    int n,i,k=0;
    scanf("%d",&n);
    int id[n];
    double mark[n],highest=0;
    for(i=0;i<n;i++)
        scanf("%d%lf",&id[i],&mark[i]);
    for(i=0;i<n;i++){
        if(mark[i]>highest){
            k = i;
            highest = mark[i];
        }
    }
    if(highest>=8)
        printf("%d\n",id[k]);
    else
        printf("Minimum note not reached\n");

    return 0;
}
