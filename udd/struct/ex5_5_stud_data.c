#include<stdio.h>

struct st
{
	int rollno;
	char name[20];
	float marks;
};

void main()
{
	struct st v[5];
	
	int ele,i;
	ele=sizeof(v)/sizeof(v[0]);
	
	for(i=0;i<ele;i++)
	{
		printf("Enter rollno : ");
		scanf("%d",&v[i].rollno);
		printf("Enter name : ");
		scanf(" %s",v[i].name);
		printf("Enter marks : ");
		scanf("%f",&v[i].marks);
	}
	
	for(i=0;i<ele;i++)
		printf("%d %s %f\n",v[i].rollno,v[i].name,v[i].marks);
}
