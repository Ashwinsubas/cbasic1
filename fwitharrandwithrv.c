#include<stdio.h>
#include<stdlib.h>

int sum(int,int);
int main()
{
    int num1,num2,value;
    printf("Enter two numbers");
    scanf("%d%d",&num1,&num2);
    value=sum(num1,num2);  //function declare 
    printf("Sum is %d",value);
}

int sum(int a,int b)
{
    int result;
    result=a+b;
    return result; //return the value to main function it will be store in value= in main fuction
}