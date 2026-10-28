#include<stdio.h>
int main(void)
{
    int i,n,sum=0;
    printf("Enter the number for multiplication table");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        sum = i*n;
        printf("%d * %d = %d\n",n,i,sum);
    }
    return 0;
}