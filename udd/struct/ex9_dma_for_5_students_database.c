#include<stdio.h>
#include<stdlib.h>

struct st
{
	int rollno;
	char name[20];
	float marks;
};

void main()
{
	struct st *p[5];
	int i;
	for(i=0;i<5;i++)
		p[i]=malloc(sizeof(struct st));
	
	for(i=0;i<5;i++)
	{
		printf("Enter rollno,name & marks\n");
		scanf("%d %s%f",&p[i]->rollno,p[i]->name,&p[i]->marks);
	}
	
	for(i=0;i<5;i++)
		printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
	
}
