#include<stdio.h>
#include<string.h>

struct st
{
	int rollno;
	char name[20];
	float marks;
};

void main()
{
	struct st v={10,"abcd",50.5};
	
	struct st *p;
	
	p=&v;
	
	printf("dir : %d %s %f\n",v.rollno,v.name,v.marks);

	printf("ind : %d %s %f\n",p->rollno,p->name,p->marks);
	
	p->rollno=20;
	p->marks=75.5;
	//p->name="shyam";
	strcpy(p->name,"shyam");
	
	printf("dir : %d %s %f\n",v.rollno,v.name,v.marks);

	printf("ind : %d %s %f\n",p->rollno,p->name,p->marks);
	
}
