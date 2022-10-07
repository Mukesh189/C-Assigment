#include<stdio.h>
main()
{
	int i,j,k;
	for(i=64728;i<=82746;i++);
	{
		for(k=82746;k>=i;k--)
		{
			printf("\n\n\n");
		}
		for(j=64728,k=i;j<=i;j++,k--)
		{
			printf("\n\n\n%d",k);
		}
		printf("\n\n\n");
	}
}