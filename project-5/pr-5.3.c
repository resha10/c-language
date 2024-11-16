#include<stdio.h>

main()
{
	int row,col;
	printf("Enter Row :");
	scanf("%d",&row);
	printf("Enter Col :");
	scanf("%d",&col);
 
 int a[row][col] ,b[col][row];
 int i,j;
 
    printf("\n\n Input :\n\n");
 		 
 		 for(i=0; i<row; i++)
 		 {
 		 	for(j=0; j<col; j++)
 		 		{
 		 	printf("enter a[%d][%d] :",i,j);
 		 	scanf("%d",&a[i][j]);
 		 	b[j][i]=a[i][j];
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
			
			
	printf("\n\n Transpose Output : \n\n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d\t",b[i][j]);
				}
				printf("\n");
			}
	
 
}