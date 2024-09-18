#include <stdio.h>
int main()
{
  int a;
  printf("enter an interger \n");
  scanf("%d",&a);
  if(a<0)
  {
    printf("the integer is negative\n");
  }
  else if(a>0)
  {
    printf("the integer is positive\n");
  }
  else
  {
    printf("the integer is zero\n");
  }
}