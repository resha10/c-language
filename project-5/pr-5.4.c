#include<stdio.h>

int main()
{
	int row,col;
	printf("Enter Row :");
	scanf("%d",&row);
	printf("Enter Col :");
	scanf("%d",&col);
 
   int a[row][col];
   int i,j;
 
 
 	printf("\n\n Input :\n\n");
 		 
 		 for(i=0; i<row; i++)
 		 {
 		 	for(j=0; j<col; j++)
 		 		{
 		        	printf("enter a[%d][%d] :",i,j);
 		 			scanf("%d",&a[i][j]);
		        }
		        printf("\n");
	     }
	
	
	
	
	printf("\n\n Output :\n\n");
			
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d\t ",a[i][j]);
				}
				printf("\n");
			}
			
	int r,rsum=0;
	
	printf("\n\n Enter Row: ");
	scanf("%d",&r);
	
	for(i=0;i<row;i++)
	{
  		for(j=0;j<col;j++)
		  {
		  	if(r==i)
		  	{
		  	  printf("%d ",a[i][j]);
			  rsum += a[i][j];	
			}
		  }		
	}	
	printf("\n The Sum Of Row :%d",rsum);
	
	int c,csum=0;
		printf("\n\n Enter Colunm: ");
    	scanf("%d",&c);
	
	for(i=0;i<row;i++)
	{
  		for(j=0;j<col;j++)
		  {
		  	if(c==j)
		  	{
		  	  printf("%d ",a[i][j]);
			  csum += a[i][j];	
			}
		  }		
	}	
	printf("\n The Sum Of Column :%d",csum);
	
}