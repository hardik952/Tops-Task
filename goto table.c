#include<stdio.h>
int main()
{
	int i=1,num;
	printf("Enter the number whose table you want:- ");
	scanf("%d",&num);
	printf("\n");
	
	table: 
	      printf("%d x %d = %d\n",num,i,num*i);
	      i++;
	      
	if(i<=10)
	{
		goto table;
    }
	return 0;      
}
