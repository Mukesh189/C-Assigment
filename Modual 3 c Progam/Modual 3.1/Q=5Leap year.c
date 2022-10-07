#include<stdio.h>
main()
{
	int year;
	printf("\nEnter year =");
	scanf("%d",&year);
	if(year%4 == 0 && year%100 !=0 || year%400 ==0)
	{
		printf("\nLeap Year");	
	}
	
	else
	{
		printf("\n It is not leap year.");
	}
}