#include<stdio.h>
int main()
{
    int i,n,digit=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        digit=i*n;
        printf("%d * %d = %d \n",n,i,digit);
    }
    return 0;
}