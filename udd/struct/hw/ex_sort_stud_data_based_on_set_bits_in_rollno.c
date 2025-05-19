#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	int rollno;
	char name[20];
	float marks;
}SS;

void fun(int,void **);

int main()
{
	int n,i;
	printf("Enetr no of students : ");
	scanf("%d",&n);
	
	SS **p;
	
	p=malloc(sizeof(SS *)*n);
	
	for(i=0;i<n;i++)
		p[i]=malloc(sizeof(SS));
	
	printf("Enter data\n");
	for(i=0;i<n;i++)
		scanf("%d %s %f",&p[i]->rollno,p[i]->name,&p[i]->marks);
	
	fun(n,p);
	
	printf("sorted data\n");
	for(i=0;i<n;i++)
		printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
	
}

void fun(int n,void **q)
{
	SS **p=(SS **)q, t;
	
	int i,j,c,num,*count=malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++)
	{
		num=p[i]->rollno;
		c=0;
		for(int pos=31;pos>=0;pos--)
			if(num>>pos)
				c++;
		count[i]=c;	
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{ 
			if(count[i] > count[j])
			{
				t=*p[i];
				*p[i]=*p[j];
				*p[j]=t;
	
				int temp = count[i];
				count[i] = count[j];
				count[j] = temp;
			}
		}
	}
}

