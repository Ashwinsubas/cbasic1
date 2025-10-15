#include<stdio.h>

int check(int);
int main()
{
    int num;

    printf("Enter a number");
    scanf("%d",&num);
    check(num);
}

int check(int value)
{
    if(value%2==0)
    {
        printf("%d is even",value);
    }
    else{
        printf("%d is odd",value);
    }
}