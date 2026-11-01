#include<stdio.h>

int even(int);
int main(void)
{

    int num,result;
    printf("Enter a number to check it even if even print 1 and not 0 ");
    scanf("%d",&num);

    result = even(num);
    printf("%d",result);
    return 0;

}

int even(int num1)
{
    if(num1%2==0)
    {
       return 1;
    }
    else
    {
       return 0;
    }
}