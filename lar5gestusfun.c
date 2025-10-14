#include<stdio.h>

int largest(int num1,int num2);
int main()
{
    int num1,num2,result;
    printf("Enter two number to find largest");
    scanf("%d%d",&num1,&num2);
   result = largest(num1,num2);

   printf("Greatest of %d and %d is %d",num1,num2,result);
}

int largest(int a,int b)
{
    if(a>b)
    {
        return a;
    }else{
        return b;
    }
}