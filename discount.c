#include <stdio.h>
void main()
{
    float amount;
    printf("Enter the amount spent on purchase:\n");
    scanf("%f",&amount);
    if(amount>0 && amount<=1000)
    {
        printf("Discount=5%");
    }
    else if(amount>=1001 && amount<=5000)
    {
        printf("Discount=10%");
        
    }
    else if(amount>=5001 && amount<=10000)
    {
        printf("Discount=20%");
    }
    else
    {
        printf("NO DISCOUNT");

    }

}