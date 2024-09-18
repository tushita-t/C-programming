#include <stdio.h>
int main()
{
    float weight,height,BMI;
    printf("enter the weight if the person(in kgs):\n");
    scanf("%f",&weight);
    printf("Enter the height of the person(in m):\n");
    scanf("%f",&height);
    BMI=weight/height;
    if(BMI<18.5)
    {
        printf("UNDERWEIGHT");
    }
    else if(BMI>18.5 && BMI<24.9)
    {
        printf("NORMAL WEIGHT");
    }
    else
    {
        printf("OVERWEIGHT");
    }

}