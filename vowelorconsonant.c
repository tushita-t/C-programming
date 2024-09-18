#include <stdio.h>
int main()
{
    char input;
    printf("enter an alphabet:\n");
    scanf("%c",&input);
    if(isalpha(input) && (input=='a' || input=='e' || input=='i' || input=='o' || input=='u'))
    {
    printf("The character is a vowel\n");
    }
    else 
    {
        printf("The character is a consonant\n");
    }


}