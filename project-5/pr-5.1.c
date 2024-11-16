#include<stdio.h>

main()
{
	int size;
	
        	printf("enter value : ");
			scanf("%d",&size);
			
	int a[size];
	int i;
			
			for(i=0; i<size; i++)
			{
				printf("Enter elements [%d]:\n", i);
				 scanf("%d", &a[i]);
			}
			
			
   			 for(i=0; i<size; i++) 
			{
       			 if(a[i] < 0) 
			{
        		printf("Negative elements are:\n");
           		printf("%d ", a[i]);
        
        	}
    }
		
}