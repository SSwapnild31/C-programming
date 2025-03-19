#include<stdio.h>

void print(const int *,int);
void odd_shift(int *,int);
void main()
{
	int a[7],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	print(a,ele);
	odd_shift(a,ele);
	print(a,ele);
}

void odd_shift(int *p,int ele)
{
	int k=0;
	for(int i=0;i<ele;i++)
	{
		if(p[i]%2==0)
		{
			int num=p[i];
			for(int j=i;j>k;j--)
				p[j]=p[j-1];
			p[k++]=num;
		}
	}
}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
