#include<stdio.h>
main()
{
	int num[10],i,min;
	for(i=0;i<=9;i++)
	{
		printf("Enter Number %d=",i+1);
		scanf("%d",&num[i]);
	}
	min=num[0];
	for(i=1;i<=9;i++)
	{
		if(min <num[i])
		{
			min=num[i];
		}
	}
	printf("\nMaximum Number from Array =%d",min);
}