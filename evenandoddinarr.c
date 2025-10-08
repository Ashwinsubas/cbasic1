#include<stdio.h>
int main()
{
    int i,values[100],limit,odd=0,even=0;
    printf("Enter the limit ");
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
            even=even+1;
        }
    }

    for(i=0;i<limit;i++)
    {
        if(values[i]%2!=0)
        {
            odd=odd+1;
        }
    }
    printf("Number of odd is %d ",odd);
    printf("Number of even is %d ",even);
}