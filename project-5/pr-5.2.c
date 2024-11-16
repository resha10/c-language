#include<stdio.h>

main()
{
	
 int row,col;
	printf("Enter Row :");
	scanf("%d",&row);
	printf("Enter Col :");
	scanf("%d",&col);
 
 int a[row][col];
 int n = 0;
 int i,j;
 
 
 		 printf("\n\n Input :\n\n");
 		 
 		 for(i=0; i<row; i++)
 		 {
 		 	for(j=0; j<col; j++)
 		 		{
 		 	printf("enter a[%d][%d] :",i,j);
 		 	scanf("%d",&a[i][j]);
		  }
	}
	
	
	
	
	printf("\n\n Output :\n\n");
			
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d\t",a[i][j]);
				}
				printf("\n");
			}
			
			
			
 	printf("\n Largest number :");
 	
 		 	for(i=0; i<row; i++)
 		 	{
 		 		for(j=0; j<col; j++)
 		 		{
 		 			if(n<a[i][j])
 		 			{
 		 				n = a[i][j];
 		 				
					  }
				  }
			  }
 		 				printf("%d is large element\t",n);


}