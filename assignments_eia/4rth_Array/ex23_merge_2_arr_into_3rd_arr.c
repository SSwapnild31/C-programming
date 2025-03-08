#include<stdio.h>
void print(const int *,int);
void merge(int *,int *,int *,int,int);
void main()
{
	int a[2],b[4],c[6];
	int ele,el1,i;
	ele=sizeof(c)/sizeof(c[0]);
	el1=sizeof(a)/sizeof(a[0]);

	printf("enter a[2] ele :\n");
	for(i=0;i<2;i++)
		scanf("%d",a+i);
	
	printf("enter b[4] ele :\n");
	for(i=0;i<4;i++)
		scanf("%d",b+i);
	
	merge(a,b,c,ele,el1);
	print(c,ele);
}

void merge(int *p,int *q,int *r,int ele,int el1)
{
	int i,k;
	for(i=0,k=0;k<ele;i++)
	{
		if(el1)
		{
			r[k]=p[i];
			k++;
			el1--;
		}
		r[k]=q[i];	
		k++;
	}
}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",*(p+i));
	printf("\n");
}  
