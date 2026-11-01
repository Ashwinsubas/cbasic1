#include<stdio.h>


int sum(int);
int main(void)
{
    int num,k;

    printf("Enter a number ");
    scanf("%d",&num);

   k= sum(num);
   printf("%d",k);
}

int sum(int num)
{
    if(num==0)
    {
        return 0;
    }
    return num + sum(num-1);
}