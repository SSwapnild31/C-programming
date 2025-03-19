#include<stdio.h>

void print(const int *,int);
void factorial(const int *,int *,int);
void main()
{
	int a[5],b[6],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter arry ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	print(a,ele);
	factorial(a,b,ele);
	print(b,ele);
}

void factorial(const int *p,int *q,int ele)
{
	int i,sum,num;
	for(i=0;i<ele;i++)
	{
		sum=1;
		num=p[i];
		while(num)
		{
			sum=sum*num;
			num--;
		}
		q[i]=sum;
	}
}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
