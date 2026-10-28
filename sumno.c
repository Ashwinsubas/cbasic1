#include<stdio.h>

int main(void)
{
    int i,sum,num;
    printf("Enter the number to find the sum ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);

    return 0;
}