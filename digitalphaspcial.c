#include <stdio.h>
void main()
{
    
    char input;
    printf("Enter a character:\n");
    scanf("%c",&input);
   
    if(isdigit(input))
    {
        printf("The entered character is a digit\n");
    }
    else if(isalpha(input))
    {
        printf("The entered character is a alphabet\n");
    }
    else
    {
        printf("the entered character is special character");
    }
}