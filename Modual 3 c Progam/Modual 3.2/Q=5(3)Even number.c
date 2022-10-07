#include<stdio.h>
main()
{
	int count,num,sum=0;
	printf("\nEnter the Number:");
	scanf("%d",&num);
	
	printf("Even number from 1 to %d are:\n",num);
	for(count =1; count<=num; count++)
	{
		if(count %2 ==0)
		{
			printf("%d\n",count);
			sum=sum+count;
		}
	}
	printf("\nSum of even numbers From 1To %d is %d\n",num,sum);
}