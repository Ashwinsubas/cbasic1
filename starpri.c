#include<stdio.h>
int main(void)
{
    int i,j,n;
    printf("Enter a limit to print stars ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

    return 0;
}