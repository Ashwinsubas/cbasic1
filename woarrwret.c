#include<stdio.h>

int sum();
int main(void)
{
    int k;
    k = sum();
    printf("Sum is %d",k);
}

int sum()
{
    int a,b,c;
    printf("Enter 2 no ");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}