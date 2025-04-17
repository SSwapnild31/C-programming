#include<stdio.h>

struct st
{
	int rollno;
	char name[20];
	float marks;
};

void print1(int,char *,float);
void print2(struct st);
void print3(struct st *);

void main()
{
	struct st v={5,"abc",45.5};
	
	//print1(v.rollno,v.name,v.marks);
	//print2(v);
	print3(&v);

	printf("In main : %d %s %f\n",v.rollno,v.name,v.marks);
}

void print1(int r,char *n,float m)
{
	printf("In print1 : %d %s %f\n",r,n,m);
}

void print2(struct st p)
{
	printf("In print2 : %d %s %f\n",p.rollno,p.name,p.marks);
	p.rollno=15;
}

void print3(struct st *p)
{
	printf("In print3 : %d %s %f\n",p->rollno,p->name,p->marks);
	p->rollno=15;
}
