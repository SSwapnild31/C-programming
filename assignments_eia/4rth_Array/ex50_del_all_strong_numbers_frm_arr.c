#include<stdio.h>

void print(const int *,int);
int strong(int *,int);
void main()
{
	int a[6],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter arry ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	print(a,ele);
	ele=strong(a,ele);
	print(a,ele);
}

int strong(int *p,int ele)
{
	int sum,r,fact;
	for(int i=0;i<ele;i++)
	{
		int temp=p[i];
		for(temp,sum=0;temp;temp/=10)
		{
			r=temp%10;
			fact=1;
			while(r)
			{
				fact=fact*r;
				r--;
			}
			sum=sum+fact;
		}
		if(p[i]==sum)
		{
			for(temp=i;temp<ele;temp++)
				p[temp]=p[temp+1];
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
