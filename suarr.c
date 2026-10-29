#include<stdio.h>
int main(void)
{
    int i,a[100],sum,limit;
    {
        printf("Enter the limit ");
        scanf("%d",&limit);
        printf("Enter values ");
        for(i=0;i<limit;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<limit;i++)
        {
            sum+=a[i];
        }
    }
    printf("Total sum %d",sum);
}