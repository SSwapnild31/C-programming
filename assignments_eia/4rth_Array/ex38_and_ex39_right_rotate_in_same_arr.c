#include<stdio.h>

void print(const int *,int);
void right_rotate(int *,int,int);
void main()
{
	int a[7],ele,i,r;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("Enter how many times arr rotate : ");
	scanf("%d",&r);

	print(a,ele);
	right_rotate(a,ele,r);
	print(a,ele);
}
void right_rotate(int *p,int ele,int r)
{
	int i,b[7],k=0;
	for(i=ele-r;i<ele;i++)
		b[k++]=p[i];
	for(i=0;i<ele-r;i++)
		b[k++]=p[i];
	for(i=0;i<ele;i++)
		p[i]=b[i];
}
void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
