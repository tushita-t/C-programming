#include <stdio.h>
int main()
{
    int age;
    printf("enter the age of the person:\n");
    scanf("%d",&age);
    if(age>=18)
    {
    printf("the person is eligible to vote\n");
    }
    else 
    {
        printf("the person is not eligible to vote\n");
    }
}
