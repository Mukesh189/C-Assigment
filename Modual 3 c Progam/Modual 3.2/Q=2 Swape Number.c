#include<stdio.h>
main()
{
	int a,b;
	printf("\nEnter two value of swape .");
	scanf("%d%d",&a,&b);
	printf("\nbefor swapping a=%d and b=%d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping a=%d and b=%d",a,b);

	
}