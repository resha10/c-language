#include<stdio.h>
#include<string.h>

void main()
{
	char name[100];
	int i;
	int count=0;
	
	printf("enter name :");
	scanf("%s",&name);
	
	for(i=0 ; i<strlen(name) ; i++)
	{
		if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
		count++;
		
	}
	 printf("Vowel are : %d",count);
	
}