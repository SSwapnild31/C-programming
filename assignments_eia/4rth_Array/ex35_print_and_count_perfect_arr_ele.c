#include<stdio.h>

void print(const int *,int);
int perfect(const int *,int);
void main()
{
	int a[7],ele,i,count=0;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array ele:\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);

	print(a,ele);
	count=perfect(a,ele);
	printf("count : %d\n",count);
}

int perfect(const int *p,int ele)
{
	int i,j,sum,c;
	printf("perfect numbers are : ");
	for(i=0,c=0;i<ele;i++)
	{
		for(j=1,sum=0;j<p[i];j++)
		{
			if(p[i]%j==0)
				sum=sum+j;
		}
		if(p[i]==sum)
		{
			printf("%d ",p[i]);
			c++;
		}
	}
	printf("\n");
	return c;
}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
