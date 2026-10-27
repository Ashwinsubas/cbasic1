#include<stdio.h>

int main(void)
{
    int num;
    printf("Enter a no to check positive or negative");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Enter number %d is positive",num);
    }
    else 
    {
        printf("Enter number %d is negative",num);
    }
    return 0;
}