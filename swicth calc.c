// basic calculator using switch.
#include<stdio.h>
int main()
{
	char d;
	printf("enter your operator:");
	scanf("%c",&d);
	
	int a,b,c;
	printf("enter your num:");
	scanf("%d%d",&a,&b);
	
	
	switch (d)
	{
		case '+':
			c=a+b;
			printf("your ans:%d",c);
			break;
			
		case '-':
		    c=a-b;
			printf("your ans:%d",c);
			break;
			
		case '*':
		    c=a*b;
			printf("your ans:%d",c);
			break;
			
		case '/':
		    c=a/b;
			printf("your ans:%d",c);
			break;
			
		default:
		    printf("select valid operator.");
	}
}
