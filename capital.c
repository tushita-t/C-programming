#include <stdio.h>
int main()
{
    char input;
    printf("enter a character:\n");
    scanf("%c",&input);
    if(isupper(input))
    {
        printf("the character is in uppercase\n");

    }
    else
    {
        printf("the letter is in lower case\n");
    }
}
