#include<stdio.h>
struct student{
	char name[10];
	float percentage;
	int age;
};

void main()
{
	struct student s[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter name,percentage,age:");
		scanf("%s %f %d",s[i].name,&s[i].percentage,&s[i].age);
	}

	for(i=0;i<5;i++)
	{
		printf("\n%s %f %d",s[i].name,s[i].percentage,s[i].age);
	}

}