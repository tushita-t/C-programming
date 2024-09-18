# include<stdio.h>
int main()
{
    float speed,distance,time;
    printf("enter the speed of the traveller\n");
    scanf("%f",&speed);
    printf("enter the time taken\n");
    scanf("%f",&time);
    distance=speed*time;
    printf("the distance is:%f\n",distance); 
}