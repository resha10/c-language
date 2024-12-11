#include <stdio.h>

struct Students 
{
    int std_id;
    char std_name[100];
    int std_mathematics;
    int std_chemistry;
    int std_physics;
};

int main() 
{
    int i, number;

    printf("\nEnter the number of Student => ");
    scanf("%d", &number);

    struct Students stud[number];

    for (i = 0; i < number; i++) 
	{
    	printf("\nEnter details for Student => %d\n", i + 1);
    	
    	printf("Roll No => ");
    	scanf("%d", &stud[i].std_id);
    	
		printf("Name => ");
    	scanf(" %[^\n]", stud[i].std_name);
    	
    	printf("Mathematics => ");
    	scanf("%d", &stud[i].std_mathematics);
    	
		printf("Chemistry => ");
    	scanf("%d", &stud[i].std_chemistry);
    	
		printf("Physics => ");
    	scanf("%d", &stud[i].std_physics);
	}


    printf("\n Student Results \n\n");
    
    for (i = 0; i < number; i++) 
	{
        printf("%s", stud[i].std_name);
        printf(" (%d)\n", stud[i].std_id);
        
        printf("mathematics => %d\n", stud[i].std_mathematics);
        printf("Chemistry => %d\n", stud[i].std_chemistry);
        printf("Physics => %d\n", stud[i].std_physics);
        
        int total = (stud[i].std_chemistry + stud[i].std_mathematics + stud[i].std_physics);
		printf("Total => %d/400\n", total);
        
		float per = ((float)(stud[i].std_chemistry + stud[i].std_mathematics + stud[i].std_physics) / 300) * 100;
		printf("Per => %.2f%%\n", per);
		
		printf("\n\n");
    }
}