#include<stdio.h>
int main()
{

	printf("Find factors: \n");
	int i,num;
	printf("Enter the number to find the factors of:");
	scanf("%d",&num);
	printf("Factors of %d are\n\n",num);
	
	for(i=1;i<=num;i++)
	{
	   if(num%i==0)
	   printf("%d\n",i); 
	
	}
	return 0;
}
