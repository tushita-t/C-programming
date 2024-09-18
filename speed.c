# include<stdio.h>
int main()
{
    float speed,distance,time;
    printf("enter the distance travelled\n");
    scanf("%f",&distance);
    printf("enter the time taken\n");
    scanf("%f",&time);
    speed=distance/time;
    printf("the speed is:%f\n",speed); 
}