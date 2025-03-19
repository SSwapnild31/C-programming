#include<stdio.h>

void print(const int *,int);
int strong(const int *,int);
void main()
{
	int a[7],ele,i,count;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array ele:\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	print(a,ele);
	count=strong(a,ele);
	printf("count of strong : %d\n",count);
}

int strong(const int *p,int ele)
{
	int i,temp,r,fact,sum,c=0;
	printf("strong arry ele : ");
	for(i=0;i<ele;i++)
	{
		for(temp=p[i],sum=0;temp;temp/=10)
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
