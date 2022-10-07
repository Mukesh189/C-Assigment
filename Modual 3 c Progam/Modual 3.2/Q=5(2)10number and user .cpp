#include<stdio.h>
main()
{
	int a[5],i,j,temp;
	for(i=0;i<=4 ; i++)
	{
		printf("\nEnter The Number :");
		scanf("%d",&a[i]);
	}
	for(i =0; i<=10 ; i++)
	{
		for(j=i;j<=4;j++)
		{
			if(a[i]>a[j+1])
			{
				temp =a[i];
				a[i] =a[j+1];
				a[j+1] =temp;
			}
		}
	}
	for(i=0;i<=4;i++)
	{
		printf("\nSorted Number:%d",a[i]);
	}
}