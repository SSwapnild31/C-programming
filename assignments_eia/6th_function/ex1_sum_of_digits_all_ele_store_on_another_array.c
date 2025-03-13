/*
1.WAP in C using function to sum of digit of all
elements in array , store results in another array.

i/p: int a[6]={1,22,121,34,78,444};
o/p: int b[6]= {1, 4, 4, 7, 15, 12 };
void sum_fun(int *a,int *b , int ele );*/

#include<stdio.h>

void print(const int *,int);
void sum_fun(const int *,int *,int);
void main()
{
	int a[6],b[6],ele,i;
	ele=6;
	
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	print(a,ele);
	sum_fun(a,b,ele);
	print(b,ele);
}

void sum_fun(const int *a,int *b,int ele)
{
	int i,temp,r,sum;
	for(i=0;i<ele;i++)
	{
		for(temp=a[i],sum=0;temp;temp/=10)
		{
			r=temp%10;
			sum=sum+r;
		}
		b[i]=sum;
	}
}
void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}

