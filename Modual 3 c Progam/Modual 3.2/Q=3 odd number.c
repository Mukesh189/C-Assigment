#include<stdio.h>
main()
{
	int n;
	printf("\nEnter an integer number .");
	scanf("%d",&n);
	
	(n % 2 == 0) ?
	printf("%d is Even number",n):
	printf("%d is Odd number",n);
}