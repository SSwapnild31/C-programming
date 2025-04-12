#include<stdio.h>

struct st 
{
	int rollno;
	char name[100];
	float mark;
};

void main()
{
	struct st v;
	
	printf("Enter rollno,name & marks:\n");
	scanf("%d %s %f",&v.rollno,v.name,&v.mark);

	printf("%d %s %f\n",v.rollno,v.name,v.mark);
}
