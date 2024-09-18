#include <stdio.h>
void main()
{
  char a;
  printf("enter a character \n");
  scanf("%c",&a);
  if(isalpha(a))
  {
    printf("the character is an alphabet \n");
  }
  else 
  {
    printf("the character is not an alphabet\n");
  }
}