#include<stdio.h>

main()
{
	char name[100] = "DIPEN";
	int i;
	
	for(i=0;name[i]!=NULL;i++)
	{
		if(name[i]>='A' && name[i]<='Z')
		{
			printf("%c",name[i]+32);
		}
		else
		{
			printf("%c",name[i]);
		}
	}
	
}