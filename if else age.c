// take an input from the user and don't allow them to drive if they are under 18.
#include<stdio.h>
int main()
{
	int age;
	printf("what is your age? :");
	scanf("%d",&age);
	if(age>18)
	{
		printf("you can drive ");
	}
	else
	{
		printf("you can not drive");
	}
}
