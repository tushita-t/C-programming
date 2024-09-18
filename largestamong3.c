#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter a nunmber\n");
    scanf("%d",&a);
    printf("enter a nunmber\n");
    scanf("%d",&b);
    printf("enter a nunmber\n");
    scanf("%d",&c);
    if(a>b)
    {
        printf("a is the largest number\n");
    }
    else if(b>c)
    {
         printf("b is the largest number\n");
         
    }
    else{
        printf("c is the largest number\n");
    }
}
