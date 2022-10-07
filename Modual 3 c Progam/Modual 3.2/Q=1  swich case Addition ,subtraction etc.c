#include<stdio.h>
main()
{
	int a,b,ans;
	char n;
	printf("\nSelect the opractio to perform :");
	printf("\n+.Addition \n-.Subtraction \n*.Multiplication\n/.Division \n");
	scanf("%c",&n);
	
	printf("\nEnter A =");
	scanf("%d",&a);
	printf("\nEnter B =");
	scanf("%d",&b);
	
	switch(n)
	{
		case'+':
			ans=a+b;
			printf("\nAddition =%d",ans);
			break;
			
		case'-':
			ans=a-b;
			printf("\nSubtraction =%d",ans);
			break;
		
		case'*':
			ans=a*b;
			printf("\nMultiplication =%d",ans);
			break;
	
		case'/':
			ans=a/b;
			printf("\nDivision =%d",ans);
			break;
		
		default:
		printf("\nInvaild input!!");
			
		
		
		
	}
}