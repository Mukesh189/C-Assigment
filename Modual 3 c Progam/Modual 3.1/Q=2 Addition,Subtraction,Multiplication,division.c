#include<stdio.h>
main()
{
	int a,b,addition,subtraction,multiplication,division;
	
	printf("\nEnter A	:");
	scanf("%d",&a);
	
	printf("\nEnter B	:");
	scanf("%d",&b);
	
	addition	=a+b;
	subtraction	=a-b;
	multiplication	=a*b;
	division	=a/b;
	
	printf("\nThe Result of Addition	:%d",addition);
	printf("\nThe Result of Subtraction	:%d",subtraction);
	printf("\nThe Result of multiplication	:%d",multiplication);
	printf("\nThe Result of division	:%d",division);
}