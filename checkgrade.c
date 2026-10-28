#include<stdio.h>
int main(void)
{
    int mark;
    printf("Enter your mark to get garde ");
    scanf("%d",&mark);
    if(mark>=90)
    {
        printf("Grade = A");
    }
    else if(mark>=80)
    {
        printf("Grade = B");
    }
    else if(mark>=70)
    {
        printf("Grade = C");
    }
    else if(mark>=60)
    {
        printf("Grade = D");
    }
    else if(mark>=50)
    {
        printf("Grade = E");
    }
    else if(mark<50)
    {
        printf("Grade = FAILED");
    }
     return 0;
}