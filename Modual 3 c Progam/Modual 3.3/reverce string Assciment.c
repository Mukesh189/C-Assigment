#include<stdio.h>
main()
{
	char s[30];
	int i,n;
	printf("\nEnter A String : ");
	gets(s);
	
	n =strlen(s);
	for(i=n;i>=0;i--)
	{
		printf("%c",s[i]);
	}
}