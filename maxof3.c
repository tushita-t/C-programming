#include <stdio.h>
int max_of_three(int num1, int num2, int num3)
{
    if(num1>=num2 && num1>=num3)
    {
    return num1;
    }

else if(num2>=num1 && num2>=num3)
{
    return num2;
}
else 
{
    return num3;
}
}

int main()
{
    int number1,number2,number3;
    printf("Enter 3 number:\n");
    scanf("%d %d %d",&number1,&number2,&number3);

    int max =max_of_three(number1,number2,number3);
    {
        printf("The maximum number is:%d\n",max);
        return 0;
    }
}
