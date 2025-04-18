#include<stdio.h>
#include<stdlib.h>

struct st
{
	int rollno;
	char name[20];
	float marks;
};

void fun_dma(struct st **p);

void main()
{
	struct st *p;
	fun_dma(&p);
	
	printf("Enter rollno, name & marks\n");
	scanf("%d %s %f",&p->rollno,p->name,&p->marks);
	
	printf("%d %s %f\n",p->rollno,p->name,p->marks);
}

void fun_dma(struct st **p)
{
	*p=malloc(sizeof(struct st));
}
