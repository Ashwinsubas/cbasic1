#include<stdio.h>
int main()
{
    int i,values[100],limit,sum=0;
    printf("Enter the limit");
    scanf("%d",&limit);
    printf("Enter the value to find sum");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&values[i]);
    }
    for(i=0;i<limit;i++)
    {
        sum=sum+values[i];
    }
    printf("Sum is %d ",sum);
}