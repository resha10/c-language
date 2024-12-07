#include <stdio.h>

int main() 
{
    char str[100];
    char *ptr = str;

    printf("Enter string: ");
    gets(str);

    int len = 0;
    
    while (*ptr != '\0') 
	{
        len++;
        ptr++;
    }
    
    printf("Length of the string '%s' %d \n", str, len);

    return 0;
}