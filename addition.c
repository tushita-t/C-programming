#include <stdio.h>
int main() 
{
    int a,b,result;
    char ch;
    printf("enter integer\n");
    scanf("%d",&a);
    printf("enter integer\n");
    scanf("%d",&b);
    printf("enter operation\n");
    scanf(" %c", &ch);
    switch(ch)
    {
        case '+': 
            printf("Result is %d\n",a+b);
            break;
        case '-': 
            printf("Result is %d\n",a-b);
            break; 
        case '*': 
            printf("Result is%d\n",a*b);
            break;
        case '/': 
            printf("Result is %d\n",a/b);
            break;
        default:
            printf("Wrong input ");
            break;
    }

}