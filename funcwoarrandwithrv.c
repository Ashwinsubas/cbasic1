#include<stdio.h>
#include<stdlib.h>
int sum();
int main()
{
    int k;
    k=sum();
    printf("Result is %d",k);
    return 0;
}

int sum()
{
    int a,b,result;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    result=a+b;
   return result;
}