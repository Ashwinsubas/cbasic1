#include<stdio.h>
int main(void)
{
    int i,n, flag=0;
    printf("Enter a number to check it prime or not ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break ;
        }
    }
    if(flag==0)
    {
        printf("%d is prime",n);
    }
    else{
        printf("%d is not prime",n);
    }
    return 0;
}