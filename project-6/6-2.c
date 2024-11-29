#include <stdio.h>
#include<string.h>

void main()
{
    char str[20];
    
    printf("Enter the string: ");
    scanf("%s",&str);
    
    int i,j;
    
    for (i = 0; i<strlen(str); i++)
    {
    	int freq = 1;
    	
        for( j=i+1; j<strlen(str); j++)
        {
        	if(str[i] ==  str[j])
        	{
        		freq++;
        		str[j]='\0';
			}
		}
		if(str[i]!='\0')
			printf("%c => %d\n",str[i], freq);
    }
}