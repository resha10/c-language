#include<stdio.h>

void main() 
{
	
	int a[5][5];
	int (*ptr)[5];
	int n; 
	
	printf("enter arry size : ");
	scanf("%d", &n);
	
	ptr = a;
	
	printf("\n enter arry element:\n");	
	
	for(int i=0; i<n; i++) 
	{
		for(int j=0; j<n; j++) 
		{
			printf("\n enter value of [%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\n cubes of elements:\n");

	for(int i=0; i<n; i++) 
	{
		for(int j=0; j<n; j++) 
		{
			printf("%d ", ptr[i][j] * ptr[i][j] * ptr[i][j]);
		}
		printf("\n");
	}
}

    
    
 
