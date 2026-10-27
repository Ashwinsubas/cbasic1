#include<stdio.h>
int main(void)
{
    int choice;
    printf("1 for porotta\n2 for biriyani\n3 for fried rice\n4 for mandhi\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("You are selected porotta");
        break;
        case 2:
        printf("You are selected biriyani");
        break;
        case 3:
        printf("You are selected fried rice");
        break;
        case 4:
        printf("You are selected mandhi");
        break;
        default:
        printf("You are entered wrong option");
    }
    return 0;
}