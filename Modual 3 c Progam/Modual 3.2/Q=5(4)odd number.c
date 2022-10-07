#include<stdio.h>
main()
{
	int count,num,sum=0;
	printf("\nEnter the Number:");
	scanf("%d",&num);
	

	for(count =1; count<=num; count++)
	{
		if(count %2!=0)
		{
			
			sum=sum+count;
		}
	}
	printf("\nSum of all the odd number between 1 and %d is %d\n",num,sum);
}	