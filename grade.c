#include <stdio.h>
int main()
{
    int avgmarks;
    printf("enter the average marks:\n");
    scanf("%d",&avgmarks);
    if(avgmarks>80)
    {
        printf("A grade\n");
    }
    else if(avgmarks>60 && avgmarks<=80)
    {
        printf("B grade\n");
    }
    else if(avgmarks>40 && avgmarks<=60)
    {
        printf("C grade\n");
    }
    else 
    {
        printf("F grade\n");
    }
}
