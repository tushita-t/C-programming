#include <stdio.h>
int area(int a) 
{
    return a*a;
}
int perimeter(int a)
{
    return 4*a;
}
int main()
{
    int a,resultp,resulta;
    printf("enter the side length of the square:\n");
    scanf("%d",&a);
    resulta=area(a);
    resultp=perimeter(a);
    printf("The area of square is:%d\n",resulta);
    printf("The perimeter of square is:%d\n",resultp);

}