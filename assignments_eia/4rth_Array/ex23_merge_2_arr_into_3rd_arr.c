#include<stdio.h>
void print(const int *,int);
int merge(int *,int *,int *,int,int);
void main()
{
	int a[2],b[4],c[6];
	int ele,el1,el2,i;
	ele=sizeof(c)/sizeof(c[0]);
	el1=sizeof(a)/sizeof(a[0]);
	el2=sizeof(b)/sizeof(b[0]);
	printf("enter a[] ele :\n");
	for(i=0;i<el1;i++)
		scanf("%d",a+i);
	
	printf("enter b[] ele :\n");
	for(i=0;i<el2;i++)
		scanf("%d",b+i);
	
	ele=merge(a,b,c,el1,el2);
	print(c,ele);
}

int merge(int *p,int *q,int *r,int el1,int el2)
{
	int i=0,j=0,k=0;
	while(i<el1 && j<el2)
	{
		r[k++]=p[i++];
		r[k++]=q[j++];
	}
	while(i<el1)
	{
		r[k++]=p[i++];
	}
	while(j<el2)
	{
		r[k++]=q[j++];
	}
	return k;
}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",*(p+i));
	printf("\n");
}  
