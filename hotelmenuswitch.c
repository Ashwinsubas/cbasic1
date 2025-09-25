#include<stdio.h>
int main(){
    int choice;
    printf("1 for porrota \n 2 for biriyani \n 3 for fried rice \n 4 for mandhi \n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    printf("You selected porotta");
        break;
    case 2:
    printf("You selected biriyani");
    break;
    case 3:
    printf("You selected fried rice");
    break;
    case 4:
    printf("You selected mandhi");
    break;
    default:
    printf("You selected wrong choice");
        break;
    }
    return 0;

}