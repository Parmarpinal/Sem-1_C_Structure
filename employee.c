#include<stdio.h>
union employee{
	char name[20];
	int salary;
};

void main()
{
	union employee e1;
	printf("Enter name:");
	scanf("%s",e1.name);
	printf("Enter salary:");
	scanf("%d",&e1.salary);
	printf("Name=%s salary=%d",e1.name,e1.salary);
}