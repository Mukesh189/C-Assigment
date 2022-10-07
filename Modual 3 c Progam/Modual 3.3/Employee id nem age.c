#include<stdio.h>
struct Employee
{
	
	int empno,age;
	char name[20],Add[30];
};
main()
{
	struct Employee s1;
	printf("\nEnter the No.");
	scanf("%d",&s1.empno);
	
	printf("\nEnter the Name.");
		fflush(stdin);
	gets(s1.name);

	
	printf("\nEnter the Age:");
	scanf("%d",&s1.age);
	
	printf("\nEnter the Add:");
		fflush(stdin);
	gets(s1.Add);
	
	printf("\nEmployee No:%d",s1.empno);
	printf("\nEmployee Name %s",s1.name);
	printf("\nEmployee Age %d",s1.age);
	printf("\nEmployee Add %s",s1.Add);
	
	

}