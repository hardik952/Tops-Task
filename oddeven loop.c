#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter your number: ");
	scanf("%d",&num);
	printf("\n");
	
	printf("Your even numbers are: \n");
	for(i=2;i<=num;i=i+2)
	{
		printf("%d ",i);
	}
	printf("\n\n");
	printf("Your odd numbers are: \n");
	for(i=1;i<=num;i=i+2)
	{
		printf("%d ",i);
	}
	return 0;
}
