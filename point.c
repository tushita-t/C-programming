#include <stdio.h>
void main()
{
    double x,y;
    printf("Enter the x coordinate:\n");
    scanf("%lf",&x);
    printf("Enter the y coordinate:\n");
    scanf("%lf",&y);
    if(x>0 && y>0)
    {
        printf("the point is in the first quadrant");
    }
    else if(x<0 && y>0)
    {
        printf("the point is in the second quadrant");

    }
    else if(x<0 && y<0)
    {
        printf("the point is in the thrid quadrant");

    }
    else
    {
        printf("the point is in the fourth quadrant");
    }
}