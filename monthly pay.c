# include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the no.of hours worked in a week \n");
    scanf("%d",&a);
    printf("enter the rate per hour \n");
    scanf("%d",&b);
    printf("enter the no. of weeks per month\n");
    scanf("%d",&c);
    d =(a*b*c);
    printf("monthly pay is: %d\n",d);
}

