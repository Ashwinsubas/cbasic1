#include<stdio.h>
int main(){
    int num1;
    float num2,sum;
    printf("Enter two number");
    scanf("%d%f",&num1,&num2);
    sum=num1+num2;
    printf("Sum of %d %f is %f",num1,num2,sum);
    return 0;
}