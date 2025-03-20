#include<stdio.h>

void print(const int *,int);
int del_perfect(int *,int);
void main()
{
	int a[7],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter arry ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	print(a,ele);
	ele=del_perfect(a,ele);
	print(a,ele);
}

int del_perfect(int *p,int ele)
{
	int j,sum;
	for(int i=0;i<ele;i++)
	{
		for(j=1,sum=0;j<p[i];j++)
		{
			if(p[i]%j==0)	
				sum+=j;
		}
		if(p[i]==sum)
		{
			for(j=i;j<ele-1;j++)
				p[j]=p[j+1];
			i--;
			ele--;
		}
	}
	return ele;
}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
