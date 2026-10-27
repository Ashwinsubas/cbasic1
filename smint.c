#include<stdio.h>
int main(void)
{
    int p;
    float r,n,si;
    printf("Enter principal amount ");
    scanf("%d",&p);
    printf("Enter the interest rate ");
    scanf("%f",&r);
    printf("Enter the no of years ");
    scanf("%f",&n);

    si = (p*r*n)/100;

    printf("simple interest is %f",si);
    return 0;

}