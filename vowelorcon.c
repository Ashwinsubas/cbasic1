#include<stdio.h>
int main()
{
    char letter;
    printf("Enter a letter to check");
    scanf("%c",&letter);
    if(letter>='a' && letter<='z' || letter>='A' && letter<='z')
    {
  
    if(letter=='i' || letter=='o' || letter=='u' || letter=='a' || letter=='e' || letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U' )
        {
            printf("%c is vowel",letter);
        }
        else
          {
            printf("%c is consonant",letter);
          }
          }
          else{
            printf("You're entered a non alphabet");
          }
}