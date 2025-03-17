#include<stdio.h>
void print(int *,int);
void insert_arr(int *,int,int,int);
void main()
{
	int a[6]={1,2,3,4,5},ele,i,num,idx;
	ele=sizeof(a)/sizeof(a[0]);
	
	/*printf("Enter array ele :\n");
	for(i=0;i<ele-1;i++)
		scanf("%d",a+i);
	*/
	printf("Enter num: ");
	scanf("%d",&num);
	printf("Enter index : ");
	scanf("%d",&idx);
	
	print(a,ele-1);
	insert_arr(a,ele,num,idx);
	print(a,ele);
}
void insert_arr(int *a,int ele,int num,int idx)
{
	int i;
	for(i=ele;i>idx;i--)
		a[i]=a[i-1];
	a[idx]=num;
}

void print(int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
