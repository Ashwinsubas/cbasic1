#include<stdio.h>
int main(void)
{
    int i,limit,values[100],sum=0;
    printf("Enter the limit of array ");
    scanf("%d",&limit);
    printf("Enter the values ");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&values[i]);
    }

    for(i=0;i<limit;i++)
    {
        if(values[i]%2==0)

        {
            printf(" %d",values[i]);
            sum+=1;
        }
    }
    printf(" Total even numbers %d ",sum);
}