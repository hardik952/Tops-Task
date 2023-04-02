#include<stdio.h>
int main()
{
	printf("the given number is odd or even.\n");
	int a;
	printf("value of a: ");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("the number is even.");
	}
	else 
	{
		printf("the number is odd.");
	}
	return 0;
}
