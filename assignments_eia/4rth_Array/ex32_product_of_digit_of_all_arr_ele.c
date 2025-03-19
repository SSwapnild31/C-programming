#include<stdio.h>

void print(const int *,int);
void product(const int *,int *,int);
void main()
{
	int a[5],b[6],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	print(a,ele);
	product(a,b,ele);
	print(b,ele);
}

void product(const int *p, int *b,int ele)
{
	int i,r,mul,temp;
	for(i=0;i<ele;i++)
	{
		for(temp=p[i],mul=1;temp;temp/=10)
		{
			r=temp%10;
			mul=mul*r;
		}
		b[i]=mul;
	}
}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
