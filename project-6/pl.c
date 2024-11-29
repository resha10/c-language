#include <stdio.h>
#include<string.h>

main() 
{
    char str[30];
	char rev[30];
    int len = 0, Palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

	int i;

    for (i = 0; str[i] != '\0'; i++) 
	{
        len++;
    }

    for (i = 0; i < len; i++) 
	{
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0'; 

    for (i = 0; i < len; i++)
	{
        if (str[i] != rev[i]) 
		{
            Palindrome = 0;
            break;
        }
    }

    if(Palindrome)
	{
        printf("The string is a palindrome\n");
    } 
	else 
	{
        printf("The string is not a palindrome\n");
    }
}