#include<stdio.h>
int fact(int);

int main(void)
{
    int num,result;
    printf("Enter a number to find its factorial ");
    scanf("%d",&num);

   result = fact(num);
   printf("%d",result);
}

int fact(int num)
{
    if(num==0)
    {
        return 1;
    }
    return num*fact(num-1);
}