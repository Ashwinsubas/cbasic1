#include<stdio.h>

int fact(int);
int main(void)
{
    int num,result;
    printf("Enter a  number to find factorial ");
    scanf("%d",&num);

  result = fact(num);

  printf("Factorial of %d is %d",num,result);
    return 0;
}

int fact(int num1)
{
    int i,result=1;
    for(i=1;i<=num1;i++)
    {
        result = result*i;
    }
    return result;
}