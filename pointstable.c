#include <stdio.h>
int main()
{
    
    char input;
    printf("enter a character:\n");
    scanf("%c",&input);
    if(isdigit(input))
    {
        printf("points=10\n");
    }
    else if(input=='a' || input=='e' || input=='i' || input=='o'|| input=='u')
    {
        printf("points=5");
    }
    else
    {
        printf("points=0");
    }
}