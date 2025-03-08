#include<stdio.h>

void print(const int *,int);
void delete(int *,int);

void main()
{
	int a[5],ele,i;
	
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	//print(a,ele);
	delete(a,ele);
	print(a,ele);
}

void delete(int *p,int ele)
{
	int i;
	for(i=0;i<ele;i++)
	{
		p[i]=p[i+1];	
	}
}

void print(const int *p,int ele)
{
	for(int i=0;i<ele-1;i++)
		printf("%d ",*p++);
	printf("\n");
}
