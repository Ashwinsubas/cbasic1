#include<stdio.h>

int main(void)
{
    int a,b,sum;

    printf("Enter a two numbers");
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("Sum of %d and %d is = %d ",a,b,sum);
    return 0;
}