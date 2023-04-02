#include<stdio.h>
int main()
{
	printf("given number is positive or negative.\n");
	int a;
	printf("value of a: ");
	scanf("%d",&a);
	
	if(a>=0)
	{
		printf("the number is positive.");
	}
	else
	{
		printf("the number is negative.");
	}
	return 0;
}
