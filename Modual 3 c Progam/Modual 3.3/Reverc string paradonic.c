#include<stdio.h>
#include<string.h>
main()
{
	char s[30];
	int i,n,p;
	printf("\nEnter A String : ");
	gets(s);
	
	n =strlen(s);
	for(i=0;i<n;i++)
	{
		if (s[i]!=s[n-i-1])
		{
			p=1;
			break;
		}
	}
	if(p == 1)
	{
		printf("\String is Not Palindrom");
		
	}
	else
	{
		printf("\nString is Palindrom");
	}
}