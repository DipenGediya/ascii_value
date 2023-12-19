#include<stdio.h>

main()
{
	char name[100] = "dipen";
	int i;
	
	for(i=0;name[i]!=NULL;i++)
	{
		if(name[i]>='a' && name[i]<='z')
		{
			printf("%c",name[i]-32);
		}
		else
		{
			printf("%c",name[i]);
		}
	}
}