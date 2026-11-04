#include<stdio.h>

void rev(int);
int main(void)
{
    int num,result;
    printf("Enter a limit to print reverse ");
    scanf("%d",&num);

    rev(num);
}

void rev(int num1)
{
    if(num1==0)
    {
        return;
    }
    printf("%d ",num1);
    return rev(num1-1);
}