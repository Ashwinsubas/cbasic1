#include<stdio.h>
#include<stdlib.h>

void sum(int, int); // Function declaration

int main(void)
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);  // Input from user
    sum(a, b);              // Function call with arguments
}

void sum(int num1, int num2)
{
    int result;
    result = num1 + num2;   // Addition
    printf("Sum is %d", result); // Output
}
