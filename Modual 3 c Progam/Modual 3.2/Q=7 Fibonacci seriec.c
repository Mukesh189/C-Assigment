#include <stdio.h>
main()
{
	int n,i ,n1=0,n2=1,n3;
	printf("\nEnter howmany number of Fibonacci series u want :");
	scanf("%d",&n);
	printf("%d %d ",n1,n2);
	
	for(i=3;i<=n;i++)
	{
		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
	}
}