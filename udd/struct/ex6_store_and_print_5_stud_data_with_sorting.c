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
	struct st v[5],t;
	
	int ele,i;
	ele=sizeof(v)/sizeof(v[0]);
	
	for(i=0;i<ele;i++)
	{
		printf("Enter rollno : ");
		scanf("%d",&v[i].rollno);
		printf("Enter name : ");
		scanf(" %s",v[i].name);
		printf("Enter marks : ");
		scanf("%f",&v[i].marks);
	}
	
	printf("before :\n");
	for(i=0;i<ele;i++)
		printf("%d %s %f\n",v[i].rollno,v[i].name,v[i].marks);
	
	int op,j;
	
	printf("\n1.rollno wise\n2.name wise\n3.marks wise\n");
	printf("Enter option for sort data : ");
	scanf("%d",&op);

	if(op==1)
	{
		for(i=0;i<ele-1;i++)
		{
			for(j=0;j<ele-1-i;j++)
			{
				if(v[j].rollno>v[j+1].rollno)
				{
					t=v[j];
					v[j]=v[j+1];
					v[j+1]=t;
				}
			}
		}
	}
	else if(op==2)
	{
		for(i=0;i<ele-1;i++)
		{
			for(j=0;j<ele-1-i;j++)
			{
				if(strcmp(v[j].name,v[j+1].name)>0)
				{
					t=v[j];
					v[j]=v[j+1];
					v[j+1]=t;
				}
			}
		}
	}
	else if(op==3)
	{
		for(i=0;i<ele-1;i++)
		{
			for(j=0;j<ele-1-i;j++)
			{
				if(v[j].marks>v[j+1].marks)
				{
					t=v[j];
					v[j]=v[j+1];
					v[j+1]=t;
				}
			}
		}
	}
	else
		printf("unknown option..!");
	
	printf("before :\n");
	for(i=0;i<ele;i++)
		printf("%d %s %f\n",v[i].rollno,v[i].name,v[i].marks);
}
