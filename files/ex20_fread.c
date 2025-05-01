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

	fread(&v,28,1,fp);
	
	printf("%d %s %f\n",v.rollno,v.name,v.marks);
}
