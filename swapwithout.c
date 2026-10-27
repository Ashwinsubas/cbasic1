#include<stdio.h>
int main (void)
{
    int a=20, b=10;

    printf("Values before swap a = %d and b = %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nValues after swap is a = %d and b = %d ", a,b);
    return 0;

}