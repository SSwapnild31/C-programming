#include<stdio.h>
void print(const int *,int);
void main()
{
	int a[]={30,50,60,20,5},ele;
	ele=sizeof(a)/sizeof(a[0]);

	print(a,ele);
}

void print(const int *p,int ele)
{
	int i;
	for(i=0;i<ele;i++)
		printf("%d ",*(p+i));
	printf("\n");
}
