#include<stdio.h>
int main()
{
	int i;
	for(i=10;i<=100;i=i+10)
	{
		if(i==60)
		{
			break;
		}
		printf("%d\n",i);
	}
	return 0;
}
