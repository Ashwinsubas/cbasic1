#include<stdio.h>

int main(void)
{
    int num1,num2,choice,result;
    printf("Enter two numbers ");
    scanf("%d%d",&num1,&num2);
    printf("1 for add \n2 for sub \n3 for multiplication \n4 for divison \n");
    scanf("%d",&choice);
    if(choice == 1)
    {
        result= num1+num2;
        printf("Result = %d + %d = %d",num1,num2,result);

    }
    else if(choice==2)
    {
        result=num1-num2;
        printf("Result = %d - %d = %d",num1,num2,result);    }
    else if(choice==3)
    {
        result=num1*num2;
        printf("Result = %d * %d = %d",num1,num2,result);
    }
    else if(choice==4)
    {
        result=num1/num2;
        printf("Result = %d / %d = %d",num1,num2,result);
    }
    else{
        printf("%d is not in the option",choice);
    }
    return 0;
    
}