//W.A.P to make grade vise result.
#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks: ");
	scanf("%d",&marks);
	
	if (marks>=95)
	{
		printf("A++ GRADE");
	}
	else if(marks>=90)
	{
		printf("A+ GRADE");
	}
		else if(marks>=80)
	{
		printf("A GRADE");
	}
		else if(marks>=70)
	{
		printf("B+ GRADE");
	}
		else if(marks>=60)
	{
		printf("B GRADE");
	}
		else if(marks>=50)
	{
		printf("C GRADE");
	}
		else if(marks>=35)
	{
		printf("D GRADE");
	}
	    else
	    {
	    	printf("better luck next time\nsorry!!!!");
		}
	
	
	
	
	
	
}
