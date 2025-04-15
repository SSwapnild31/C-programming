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
	int n,i;
	printf("Enter no of students : ");
	scanf("%d",&n);
	
	struct st **p;
	
	p=malloc(sizeof(struct st *)*n);
	
	for(i=0;i<n;i++)
		p[i]=malloc(sizeof(struct st)*n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter rollno,name & marks\n");
		scanf("%d %s%f",&p[i]->rollno,p[i]->name,&p[i]->marks);
	}
	
	for(i=0;i<n;i++)
		printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
	
	for(i=0;i<n;i++)
	{
		free(p[i]);
		p[i]=0;
	}
	
	free(p);
	p=0;
}
