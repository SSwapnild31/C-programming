#include<stdio.h>

void print(const int *,int);
void prime_idx(int *,int);
void main()
{
	int a[8],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter arry ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	print(a,ele);
	prime_idx(a,ele);
	print(a,ele);
}

void prime_idx(int *p,int ele)
{
	int j;
	for(int i=2;i<ele;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(i==j)
			p[i]=0;
	}
}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
