#include<stdio.h>
int main(void)
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("Hi\n");
        if(i==5)
        {
            break;  //when the loop come break condition the loop stop its working
        }
        printf("Hello\n");
    }
    printf("Finished");

    return 0;
}