#include<stdio.h>
int main()
{
    char letter;
    printf("Enter a letter");
    scanf("%c",&letter);
    switch(letter)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I':case 'O': case 'U':
        printf("%c is vowel",letter);
        break;
        default:
        if((letter>='a' && letter<='z') || (letter>='A' && letter<='Z'))
        {
            printf("%c is consonant",letter);
        }
        else{
            printf("You entered a non alphabatic letter");
        }
        return 0;
    }
   
    
    

}