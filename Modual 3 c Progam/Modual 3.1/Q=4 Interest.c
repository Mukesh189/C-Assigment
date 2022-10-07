#include<stdio.h>
main()
{
	float a,b,c,interest;
	
	printf("\nEnter the principla Amount :");
	scanf("%f",&a);
	
	printf("\nEnter the rate of interest :");
	scanf("%f",&b);
	
	printf("\nEnter the time Duration :");
	scanf("%f",&c);
	
	interest=(a*b*c)/100;
	printf("\nThe simple interest:%f",interest);	
}