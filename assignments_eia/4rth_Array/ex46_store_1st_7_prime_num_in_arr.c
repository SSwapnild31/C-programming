#include<stdio.h>

void print(const int *,int);
void prime(int *,int);
void main()
{
	int a[7],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	
	//print(a,ele);
	prime(a,ele);
	print(a,ele);
}

void prime(int *p,int ele)
{
	int i=0,j;
	for(int num=2;i<ele ;num++)
	{
		for(j=2;j<num;j++)
		{
			if(num%j==0)
				break;
		}
		if(num==j)
			p[i++]=num;
	}
}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
