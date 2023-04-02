#include<stdio.h>
int main()
{
	int n1,n2,i;
	printf("enter your number 1: ");
	scanf("%d",&n1);
	printf("enter youe number 2: ");
	scanf("%d",&n2);
	printf("decrement order of %d to %d: \n",n1,n2);
	i=n1;
	do
	{
		printf("%d\n",i);
		i--;
	}while(i>=n2);
	return 0;
}
