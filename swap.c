#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter value of a: ");
	scanf("%d",&a);
	printf("Enter value of b: ");
	scanf("%d",&b);
	printf("\n");
	c=a;
	a=b;
	b=c;
	printf("After swap value a: %d\n",a);
	printf("After swap value b: %d\n",b);
    return 0;
}
