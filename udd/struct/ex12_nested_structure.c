#include<stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

struct st
{
	int rollno;
	char name[20];
	float marks;
	struct date dob;
	struct date doj;
};

void main()
{
	struct st v;
	
	v.dob.day=11;
	v.dob.month=12;
	v.dob.year=2001;
	
	v.doj.day=15;
	v.doj.month=4;
	v.doj.year=2025;
	
	printf("dob : %d:%d:%d\n",v.dob.day,v.dob.month,v.dob.year);
	printf("doj : %d:%d:%d\n",v.doj.day,v.doj.month,v.doj.year);
}
