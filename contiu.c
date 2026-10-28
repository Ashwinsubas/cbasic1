#include<stdio.h>
int main(void)
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("Hi\n");
        if(i==5)
        {
            continue;
        }
        printf("Hello\n");
    }
    printf("Finished");
    return 0;
}