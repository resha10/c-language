#include<stdio.h>

main(){
	
	char ch='a';
	
	do
	{
		printf("%c \t",ch);
		ch=ch+4;
	}
	while(ch<='z');
}