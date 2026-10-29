#include<stdio.h>
int main(void)
{
    int i,limit,a[100];

    printf("Enter the limit of array between 100 ");
    scanf("%d",&limit);
    printf("Enter values for array ");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;

}