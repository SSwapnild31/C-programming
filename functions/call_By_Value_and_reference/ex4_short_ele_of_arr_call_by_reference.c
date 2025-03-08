#include<stdio.h>
void print(const int *,int);
void bubble_sort(int *,int);
void main()
{
	int a[5],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	print(a,ele);
	bubble_sort(a,ele);
	print(a,ele);
}

void bubble_sort(int *p,int ele)
{
	int i,j;
	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{	
			if(p[j]>p[j+1])
			{
				int t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
}

void print(const int *p,int ele)
{
	int i;
	for(i=0;i<ele;i++)
		printf("%d ",*p++);
	printf("\n");
}

