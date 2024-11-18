#include <stdio.h>
int primenumber(int num)
{

    for(int i=2; i*i<=num; i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if(primenumber(num))
    {
        printf("the number is prime\n",num); 
    }
    else 
    {
        printf("the number is not prime\n",num);
    }

}