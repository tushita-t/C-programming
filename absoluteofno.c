#include <stdio.h>
int absolutevalue(int x)
{
    if (x<0)
    {
        return -x;
    }
    else
    {
        return x;
    }
}

int main()
{
    int number;
    printf("Enter a number:\n");
    scanf("%d",&number);

    
    printf("The absolute value of the numebr is:%d",number,absolutevalue(number));

}