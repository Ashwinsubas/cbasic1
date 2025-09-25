#include<stdio.h>
int main(){
    float mark;
    printf("Enter your total grade out of 100 : ");
    scanf("%f",&mark);
    if(mark>=90 && mark<=100)
    {
        printf("Your grade is A");
    }
    else if(mark>=80 && mark<=89)
    {
        printf("Your grade is B");
    }
    else if(mark>=70&&mark<=79)
    {
        printf("Your grade is C");
    }
    else if(mark>=60 && mark<=69)
    {
        printf("Your grade is D");
    }
    else if(mark>=50 && mark<=59)
    {
        printf("Your grade is E");
    }
    else if(mark<50)
    {
        printf("You're failed");
    }
    else
    {
        printf("Enter a valid mark");
    }
    return 0;
}