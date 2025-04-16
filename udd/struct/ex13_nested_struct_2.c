#include<stdio.h>

struct st
{
	int rollno;
	char name[20];
	float marks;
	struct date
	{
		int day;
		int month;
		int year;
	}dob,doj;
}v;

void main()
{
	printf("Enter rollno,name & marks\n");
	scanf("%d %s %f",&v.rollno,v.name,&v.marks);
	printf("Enter dob and doj\n");
	scanf("%d %d %d %d %d %d",&v.dob.day,&v.dob.month,&v.dob.year,&v.doj.day,&v.doj.month,&v.doj.year);
	
	printf("-------------------\n");
	printf("%d %s %f\n",v.rollno,v.name,v.marks);
	printf("dob : %d/%d/%d\ndoj : %d/%d/%d\n",v.dob.day,v.dob.month,v.dob.year,v.doj.day,v.doj.month,v.doj.year);
}
