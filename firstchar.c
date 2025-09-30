#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the word");
    fgets(str,sizeof(str),stdin);
    if(str[0]!= ' ' && str[0]!="\n")
    { printf("%c",str[0]);
    }
    
}