#include<stdio.h>
main()
{
	int day,month;
	float year;

	printf("\nEnter number of years convert into days.");
	scanf("%f",&year);
	
	day=(int)year*365;
	printf("\No of year for given day =%d",day);
	
	
}