#include<stdio.h>

main()
{
	int ch;
	
	printf("Enter the character = ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		ch = ch + 32;
	}
	printf("Lowercase of %c is = %c",ch,ch);
}