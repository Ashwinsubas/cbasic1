#include<stdio.h>
int main(void)
{
    float a,b,c,avg;
    printf("Enter three numbers to find average");
    scanf("%f%f%f",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("Average of %f and %f and %f is = %f",a,b,c,avg);
    return 0;
}