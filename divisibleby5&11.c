#include <stdio.h>
int main()
{
    int a ;
    printf("enter an integer \n");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("the integer is divisibke by 5 \n");
    }
   else if(a%11==0)
   {

    printf("the integer is divisibe by 11 \n");

   }
   else
   {
    printf("the integer is not divisible by 5&11 \n");
   }
}