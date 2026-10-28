#include<stdio.h>
int main(void)
{
    float mark;
    printf("Enter you mark to check ");
    scanf("%f",&mark);
    if(mark>=50)
    {
        printf("You are passed");
    }
    else
    {
        printf("You are failed");
    }
    return 0;
}