#include<stdio.h>

void print(const int *,int);
int prime(const int *,int *,int);
void main()
{
	int a[8],b[8],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array ele:\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	print(a,ele);
	ele=prime(a,b,ele);
	print(b,ele);
}

int prime(const int *p,int *q,int ele)
{
	int j,k=0;
	for(int i=2;i<ele;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(i==j)
			q[k++]=p[i];
	}
	return k;
}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
