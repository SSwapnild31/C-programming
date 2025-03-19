#include<stdio.h>

void print(const int *,int);
int count_prime(const int *,int);
void main()
{
	int a[7],ele,i,count;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	print(a,ele);
	count=count_prime(a,ele);
	printf("prime count : %d\n",count);
}

int count_prime(const int *p,int ele)
{
	int i,j,c;
	for(i=0,c=0;i<ele;i++)
	{
		for(j=2;j<p[i];j++)
		{
			if(p[i]%j==0)
				break;
		}
		if(p[i]==j)
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
