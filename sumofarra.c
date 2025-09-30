#include<stdio.h>
int main()
{
    int i,arr[5],sum=0;
    printf("Enter five numbersb to find sum");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    printf("Total sum is %d",sum);
}