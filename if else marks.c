// take an input from the user and declare pass if marks are above 35.
#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks:");
	scanf("%d",&marks);
	
	if(marks>35)
	{
		printf("you are pass,congratulations.");
	}
	else
	{
		printf("better luck next time.");
	}
}
