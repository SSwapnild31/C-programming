#include<stdio.h>

void print(const int *,int);
void arr(int *,int *,int);

void main()
{
	int a[6],b[6],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	print(a,ele);
	arr(a,b,ele);
	print(a,ele);
}

void arr(int *a,int *b,int ele)
{
	int i,k=0;
	for(i=0;i<ele;i++)
	{
		if(a[i]<0)
		{
			b[k++]=a[i];
			
		}
				
	}
	for(i=1,k=0;i<ele;i=i+2)
		a[i]=b[k++];
	
}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
