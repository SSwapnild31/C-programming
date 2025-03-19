#include<stdio.h>

void print(const int *,int);
int armstrong(const int *,int);
void main()
{
	int a[7],ele,i,count;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter arry ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	print(a,ele);
	count=armstrong(a,ele);
	printf("strong ele count : %d\n",count);
}

int armstrong(const int *p,int ele)
{
	int i,temp,count=0,c,r,c1,mul,sum;
	printf("armstrong ele's are : ");
	for(i=0;i<ele;i++)
	{
		int temp=p[i];
		if(temp<10)
		{
			printf("%d ",p[i]);
			count++;
			continue;
		}
		for(c=0;temp;temp/=10,c++);
		for(temp=p[i],sum=0;temp;temp/=10)
		{
			r=temp%10;
			c1=c;
			mul=1;
			while(c1)
			{
				mul=mul*r;
				c1--;
			}
			sum=sum+mul;
		}
		if(p[i]==sum)
		{
			printf("%d ",p[i]);
			count++;
		}
	}
	printf("\n");
	return count;
}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
