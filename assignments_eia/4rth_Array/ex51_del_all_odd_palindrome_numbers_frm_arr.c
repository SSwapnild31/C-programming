#include<stdio.h>

void print(const int *,int);
int odd_palindrome(int *,int);
void main()
{
	int a[6],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array ele:\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	print(a,ele);
	odd_palindrome(a,ele);
	print(a,ele);
}

int odd_palindrome(int *p,int ele)
{
	for(int i;i<ele;i++)
	{
		for()
	}
}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
