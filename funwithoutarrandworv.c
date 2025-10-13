#include<stdio.h>
#include<stdlib.h>

void sum();
void main()
{
    sum();
    
}

void sum()
{
    int num1,num2,sum=0;
    printf("Enter two numbers");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("Result is %d ",sum);

}