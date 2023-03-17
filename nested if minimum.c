
//find minimum number using nested if.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter you num: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<b)
	{
	   if(a<c)
	   {
	   	printf("a number is the minimum.");
	   }
	   else
	   {
	   	printf("c number is the minimum.");
	   }
	}
	else
	{
	    if(b<c)
	    {
	    	printf("b number is the minimum. ");
		}
		else
		{
			printf("c number is the minimum.");
		}
		return 0;
	}
	
	
	
}
