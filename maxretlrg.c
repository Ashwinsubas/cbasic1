#include<stdio.h>

int large();
int main(void)
{
    int c;

    c=large();
    printf("%d is greater",c);
}

int large()
{
    int a,b,num;
    printf("Enter two number ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}