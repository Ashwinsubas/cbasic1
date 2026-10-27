#include<stdio.h>

int main(void)
{
    int num1,num2,num3;
    printf("Enter three numbers to check which greater");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1>num2)
    {
        if(num1>num3)
        {
            printf("%d is greater",num1);
        }
        else{
            printf("%d is greater",num3);
        }
    }else{
        if(num2>num3)
        {
            printf("%d is greater",num2);
        }else{
            printf("%d is greater",num3);
        }
    }
    return 0;
}