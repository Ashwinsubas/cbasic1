#include<stdio.h>

int sum(int,int);

int main(void)
{
    int num1,num2,finalsum;
    printf("Enter two numbers ");
    scanf("%d%d",&num1,&num2);
   finalsum = sum(num1,num2);
   printf("Sum is %d",finalsum);
    return 0;
}

int sum(int a,int b)
{
    int result;

    result= a+b;
    return result;
}