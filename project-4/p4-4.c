#include<stdio.h>

main()
{
	int i,j;
	
	for(i=1 ; i<=5 ; i++)
	{
		for(s=i ;s>5 ; s--)
		{
			printf(" ");
		}
		for(j=1 ; j<=i ; j++)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
}