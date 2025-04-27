#include<stdio.h>
#include<stdlib.h>
struct st
{
	int rollno;
	char name[10];
	float marks;
};

void main()
{
	int n,i;
	printf("Enter size of students : ");
	scanf("%d",&n);
	
	struct st **p;

	p=malloc(sizeof(struct st *)*n);
	
	for(i=0;i<n;i++)
		p[i]=malloc(sizeof(struct st)*n);
	
	printf("Enter student rollno, name & marks\n");
	for(i=0;i<n;i++)
		scanf("%d %s %f",&p[i]->rollno,p[i]->name,&p[i]->marks);

	printf("student data\n");
	for(i=0;i<n;i++)
		printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
	printf("\n");
	
	free(p);
	p=0;
}
