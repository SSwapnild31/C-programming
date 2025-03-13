/*WAP in C using function to right rotate array 2
times .
i/p: int a[6]={-2, 2,-5,-12,5,-7};
o/p: int a[6]={5,-7,-2, 2,-5,-12};
void rotate_fun(int *a, int ele ,int n);*/



#include<stdio.h>

void print(const int *,int);
void rotate_arr(const int *,int *,int,int);

void main()
{
	int a[6],b[6],ele,i,r;
	ele=6;
	
	printf("Enter arry ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("Enter rotation :\n");
	scanf("%d",&r);

	print(a,ele);
	ele=rotate_arr(a,b,ele,r);
	print(b,ele);
}

int rotate_arr(const int *a,int *b,int ele,int r)
{
	int i,

}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}

