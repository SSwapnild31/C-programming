#include<stdio.h>
#include<stdlib.h>

struct st
{
	int rollno;
	char *name;
	float marks;
};

void main()
{
	struct st *p;
	char s[20];
	
	p=malloc(sizeof(struct st));
	
	//p->name=malloc(20);	//	both line(18 & 19) are valid
	p->name=s;		//
	
	printf("Enter rollno, name & marks\n");
	scanf("%d %s%f",&p->rollno,p->name,&p->marks);
	
	printf("%d %s %f\n",p->rollno,p->name,p->marks);
}
