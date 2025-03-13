/*WAP in C using function to right rotate array 2
times .
i/p: int a[6]={-2, 2,-5,-12,5,-7};
o/p: int a[6]={5,-7,-2, 2,-5,-12};
void rotate_fun(int *a, int ele ,int n);*/



#include<stdio.h>

void print(const int *,int);
int rotate_arr(int *,int,int);

void main()
{
	int a[6],ele,i,n;
	ele=6;
	
	printf("Enter arry ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	printf("Enter rotation :\n");
	scanf("%d",&n);

	print(a,ele);
	ele=rotate_arr(a,ele,n);
	print(a,ele);
}

int rotate_arr(int *a,int ele,int n)
{
	int i,j=0,b[6];
	for(i=ele-n;i<ele;i++)
		b[j++]=a[i];
	
	for(i=0;i<ele-n;i++)
		b[j++]=a[i];
	
	for(i=0;i<j;i++)
		a[i]=b[i];
	
	return j;

}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}

