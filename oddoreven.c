#include <stdio.h>
int evenOdd(int x)
{
   if (x%2==0)
   {
    printf("The number is even\n");

   }
   else 
   {
    printf("The number is odd\n");
   }
}

int main()
{
    int number;
    printf("Enter a  number:\n");
    scanf("%d",&number);

    evenOdd(number);
}