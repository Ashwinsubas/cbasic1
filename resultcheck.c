#include<stdio.h>
int main(){
    float mark;
    printf("Enter your mark to check");
    scanf("%f",&mark);
    if(mark>=50 && mark<=100)
    {
        printf("You are passed");
    }
    else if(mark>100)
    {
    printf("You are entered wrong mark");
    }
    else
    {
        printf("You are failed");
    }
    return 0;
}