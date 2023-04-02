#include<stdio.h>
int main()
{
   int num1,num2,i;
   printf("enter the number 1: ");
   scanf("%d",&num1);
   printf("enter the number 2: ");
   scanf("%d",&num2);
   printf("your increment order from %d to %d is: \n",num1,num2);
   
   for(i=num1;i<=num2;i++)
   {
   printf(" %d  ",i);
   }
   return 0;
}
