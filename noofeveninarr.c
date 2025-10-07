#include<stdio.h>
int main()
{
    int i,limit,values[100],sum=0;
    printf("Enter the limit");
    scanf("%d",&limit);
    printf("Enter the values upto the limit");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&values[i]);
    }
    for(i=0;i<limit;i++)
    {
        if(values[i]%2==0)
        {
            sum=sum+1;
        }
    }
    printf("Number of even numbers are : %d",sum);

    return 0;
}