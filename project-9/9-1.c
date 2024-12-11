#include <stdio.h>

void main() 
{
    FILE *odd_file,*even_file;
    int i;

	odd_file  = fopen("odd_file.txt", "w");
    even_file = fopen("even_file.txt", "w");

    if (odd_file == NULL || even_file == NULL) 
	{
        printf("Error to open file..");
    
    }

    for (i = 50; i <= 90; i++) 
	{
        if (i % 2 == 0) 
		{
            fprintf(even_file, "%d ", i);
        } 
		else 
		{
            fprintf(odd_file, "%d ", i);
        }
    }

    fclose(even_file);
    fclose(odd_file);
    
    printf("\n Even number printed in even_file...\n");
    
    printf("\n Odd number printed in odd_file...\n");
}