# include<stdio.h>
int main()
{
    int i;
    printf("enter an integer:\n");
    scanf("%d",&i);
    if(i%2==0)
    {
        printf("the entered integer is even\n");
    }
    else
    {
        printf("the entered integer is odd\n");
    }
}   