#include<stdio.h>

main()
{
	char ch;
	
	printf("Enter the character = ");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
	{
		ch = ch - 32;
	}
	
	printf("uppercase of %c is = %c",ch,ch);
}