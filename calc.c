#include<stdio.h>
int main()
{
    int choice,result,num1,num2;
    printf("Enter two numbers");
    scanf("%d%d",&num1,&num2);
    printf("1 for addition \n 2 for substraction \n 3 for multiplication \n 4 for division");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    result= num1+num2;
       printf("sum of %d and %d is %d",num1,num2,result);
        break;
    case 2:
    result= num1-num2;
       printf("difference of %d and %d is %d",num1,num2,result);
        break;
    case 3:
    result= num1*num2;
       printf("product of %d and %d is %d",num1,num2,result);
        break;
    case 4:
    result= num1/num2;
       printf("division of %d and %d is %d",num1,num2,result);
        break;
    
    default:
    printf("Enter a valid option");
        break;
    }
}