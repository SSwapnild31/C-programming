#include<stdio.h>
#include<stdlib.h>

struct st
{
	int rollno;
	char name[20];
	float marks;
};

struct st * ret_dma();
void main()
{
	struct st *p;
	
	p=ret_dma();
	
	printf("Enter rollno, name & marks\n");
	scanf("%d %s %f",&p->rollno,p->name,&p->marks);
	
	printf("%d %s %f\n",p->rollno,p->name,p->marks);
}

struct st * ret_dma()
{
	struct st *p;
	p=malloc(sizeof(struct st));
	return p;
}
