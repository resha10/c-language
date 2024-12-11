#include<stdio.h>

main()
{
	int x = 1;
	int i;
	int fact = 1;
	
	printf("enter a number :");
	scanf("%d",&i);
	
	while(x <= i)
	{
		printf("\n %d",x);
		
		fact = fact * x;
		x++;
	}
	
	printf("\n factorial number :%d",fact);
    
}