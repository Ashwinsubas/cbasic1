#include<stdio.h>
int main(void)
{
    int i,j,n=5,sum=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum=j;
            printf("%d ",sum);
        }
        printf("\n");
    }
    return 0;
}