# include<stdio.h>
int main()
{
   int a=0,b=1;
   int noofterms,sum=0;
   printf("enter the no.of terms:");
   scanf("%d",&noofterms);
   printf("%d\n%d\n",a,b);
   for(int i=0;i<noofterms;i++)
   {
    sum=a+b;
    printf("%d\n",sum);
    a=b;
    b=sum;
   }

   

}    