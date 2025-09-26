#include<stdio.h>
int main()
{
    int i,sum,n;
    printf("Enter a limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            sum=sum+i;
        }
    }
     printf("%d",sum);
    return 0;
}