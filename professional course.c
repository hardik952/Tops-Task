#include<stdio.h>
// Find the eligibility of admission for a professional course.  
int main()
{
	
	int phy,maths,chem;
	printf("Enter your marks of subjects:-\n\n");
	
	printf("PHYSICS MARKS: ",phy);
	scanf("%d",&phy);
	printf("MATHS MARKS: ",maths);
	scanf("%d",&maths);
	printf("CHEMISTRY MARKS: ",chem);
	scanf("%d",&chem);
	printf("\n");
	int pmc=phy+maths+chem;
	printf("your total of three subjects are: %d\n\n",pmc);
	int pm=phy+maths;
	printf("total of physics and maths: %d\n\n",pm);
    if((phy>=55)&&(maths>=65)&&(chem>=50))
    {
    	if((pm>=140)||(pmc>=190))
    	{
    		printf("CONGTRATULATIONS!! YOU ARE PASS.\nYOU ARE ELIGIBLE FOR OUR PROFESSIONAL COURSE.");
		}
		else
		{
			printf("SORRY!! BETTER LUCK NEXT TIME.");
		}
	}
	else
	{
			printf("SORRY!! BETTER LUCK NEXT TIME.");
	}
	return 0;
}
