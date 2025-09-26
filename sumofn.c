#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the limit to find sum");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}