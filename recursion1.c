#include<stdio.h>
int fact(int);
int main(void)
{
    int num,result;
    printf("Enter a number ");
    scanf("%d",&num);
   result = fact(num);
   printf("Sum is %d",result);
}

int fact(int num)
{
    if(num==0)
    {
        return 0;
    }
    return num+fact(num-1);
}