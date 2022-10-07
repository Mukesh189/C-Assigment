#include<stdio.h>
main()
{			
	int r;
	float area;
	
	printf("\nEnter Radius of circle	: ");
	scanf("%d",&r);
	
	area=3.14*(float)r*(float)r;
	printf("\n Area of circle	:%f",area);
}