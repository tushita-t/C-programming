#include <stdio.h>
int add(int x,int y)
{
    return x+y;
}
int sub(int x, int y)
{
    return x-y;
}
int mul(int x, int y)
{
    return x*y;
}
float div(float x, float y)
{
    return x/y;
}

int main()
{
    int num1,num2;
    printf("Enter 2 numbers:");
    scanf("%d %d",&num1,&num2);
    
    printf("The sum is:%d\n",add(num1,num2));
    printf("The difference is:%d\n",sub(num1,num2));
    printf("The product is:%d\n",mul(num1,num2));
    printf("The division is:%f\n",div(num1,num2));

}