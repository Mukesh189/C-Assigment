#include<stdio.h>
main()
{
	double i,n,ans=1;
	printf("\nEnter a number to find factorial :");
	scanf("%lf",&n);
	for(i=1;i<=n;i++)
	{
		ans =ans*i;
	}
	printf("\nFactorial of Entered Number =%lf",ans);
}