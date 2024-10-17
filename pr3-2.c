#include<stdio.h>

int main()
{
	int number , count=0;
	
	printf("enter any number :");
	scanf("%d",&number);
	
	if(number == 0)
	{
		count = 1;
	}
	else
	{
		while(number !=0)
		{
			number /= 10;
		 	count++;
		}
	}
		printf("total number of digits :- %d\n",count);	
}