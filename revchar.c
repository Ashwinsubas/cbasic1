#include<stdio.h>
int main(void)
{
    int i,limit;
    char a[100];
    printf("Enter limit ");
    scanf("%d",&limit);
    printf("Enter text ");
    for(i=0;i<limit;i++)
    {
        scanf(" %c",&a[i]);
    }
    for(i=limit-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}