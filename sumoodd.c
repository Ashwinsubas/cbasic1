#include<stdio.h>
int main(void)
{
    int i,n,sum;
    printf("Enter the limit to find sum of odd numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf(" %d,",i);
            sum+=i;
        }
    }
    printf(" %d is the sum  of %d odd numbers",sum,n);
    return 0;
}