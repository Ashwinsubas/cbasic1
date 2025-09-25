#include<stdio.h>
int main(){
    int num1,num2,choice,result;
    printf("Enter two numbers");
    scanf("%d%d",&num1,&num2);
    printf("1 for addition \n 2 for substraction \n3 for multiplication \n 4 for division \n");
    scanf("%d",&choice);
    if(choice == 1)
    {
        result=num1+num2;
    }
    else if (choice == 2)
    {
        result = num1-num2;
    }
    else if (choice == 3)
    {
        result = num1*num2;
    }
    else if(choice == 4)
    {
        result = num1/num2;
    }else{
        printf("You entered wrong choice please enter correct choice");
    }
    printf("Your answer is %d",result);
    return 0;
}