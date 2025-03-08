#include<stdio.h>

void print(const int *,int);
void delete_ele(int *p,int,int);

void main()
{
	int a[5],ele,idx,i;
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	printf("Enter index : ");
	scanf("%d",&idx);
	
	printf("Before delete : ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	
	delete_ele(a,ele,idx);
	
	printf("After delete : ");
	for(i=0;i<ele-1;i++)
		printf("%d ",a[i]);
	printf("\n");
}

void delete_ele(int *p,int ele,int idx)
{
	int i;
	for(i=idx;i<ele-1;i++)
		p[i]=p[i+1];
}
