# include<stdio.h>
float main()
{
    float celsius, fahrenheit;
    printf("enter the temp in fahrenheit\n");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9 ;
    printf("tempreture in degree celsius is:%f\n",celsius);  
}