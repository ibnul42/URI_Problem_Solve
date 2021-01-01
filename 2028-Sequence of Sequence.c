#include<stdio.h>
int main()
{
    int n,caseNo=1,number,i,j;
    while(scanf("%d",&n)!=EOF){
        number =1;
        for(i=1;i<=n;i++){
            for(j=i;j>0;j--)
                number++;
        }
        if(number==1)
            printf("Caso %d: %d numero\n",caseNo,number);
        else
            printf("Caso %d: %d numeros\n",caseNo,number);
        printf("%d",0);
        for(i=1;i<=n;i++){
            for(j=i;j>0;j--)
                printf(" %d",i);
        }
        printf("\n\n");
        caseNo++;
    }

    return 0;
}
