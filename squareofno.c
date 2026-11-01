#include<stdio.h>
void sqaure(void);

int main(void)
{

    sqaure();
    return 0;
}

void sqaure()
{
    int sq,num;
    printf("Enter a number to find square ");
    scanf("%d",&num);
    sq=num*num;
    printf("Sqaure of %d is %d",num,sq);
   
}