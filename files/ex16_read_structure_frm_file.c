#include<stdio.h>

typedef struct st
{
	int rollno;
	char name[20];
	float marks;
}ST;

void main()
{
	FILE *fp=fopen("data","r");
	
	ST v;
	
	fscanf(fp,"%d %s%f",&v.rollno,v.name,&v.marks);
	
	printf("%d %s %f\n",v.rollno,v.name,v.marks);
}
