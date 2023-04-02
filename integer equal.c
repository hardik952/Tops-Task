#include<stdio.h>
int main()
{
	printf("given value is equal to or not.\n");
	int a,b;
	printf("a & b: ");
	scanf("%d%d",&a,&b);
	
	if(a==b)
	{
		printf("the value is equal.");
		
	}
	else
	{
		printf("the value is not equal.");
	}
	return 0;
}
