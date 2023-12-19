#include<stdio.h>

main()
{
	char name[100] = "dipen";
	int i;
	
	if(name[0]>=65 && name[0]<=90)
	{
		printf("%c",name[0]);
	}
	else
	{
		printf("%c",name[i]-32);
	}
	
	for(i=1;name[i]!=NULL;i++)
	{
		if(name[i]>=97 && name[i]<=122)
		{
			printf("%c",name[i]);
		}
		else
		{
			printf("%c",name[i]-32);
		}
	}
}