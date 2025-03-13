/*1.WAP in C using function to reverse all elements
of array ,store results in another array.

i/p: int a[6]={12,42,123,34,78,414};
o/p: int b[6]={21,24,321,43,87,414};
void rev_fun(int *a,int *b , int ele );*/

#include<stdio.h>

void print(const int *,int);
void rev_arr(const int *,int *,int);
void main()
{
	int a[6],b[6],ele,i;
	ele=6;
	
	printf("Enter arry ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	print(a,ele);
	rev_arr(a,b,ele);
	print(b,ele);
}

void rev_arr(const int *a,int *b,int ele)
{
	int i,temp,rev,r;
	for(i=0;i<ele;i++)
	{
		for(temp=a[i],rev=0;temp;temp/=10)
		{
			r=temp%10;
			rev=rev*10+r;
		}
		b[i]=rev;
	}
}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
