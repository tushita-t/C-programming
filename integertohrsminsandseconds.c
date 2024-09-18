# include<stdio.h>
int main()
{
    int seconds;
    float hours, minutes;
    printf("enter an integer in seconds\n");
    scanf("%d",&seconds);
    hours= seconds/3600.0;
    printf("the given integer in hours is:%f\n",hours);
    minutes= seconds/60.0;
    printf("the given integer in minutes is:%f\n",minutes);  
}