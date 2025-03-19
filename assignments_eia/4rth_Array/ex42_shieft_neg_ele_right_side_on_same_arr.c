#include<stdio.h>

void print(const int *,int);
void neg_ele(int *,int);

void main()
{
	int a[7],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter arry ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	print(a,ele);
	neg_ele(a,ele);
	print(a,ele);
}

void neg_ele(int *p, int ele)
{
	int i,j,num,k=0;
	for(i=0;i<ele;i++)
	{
		if(p[i]>=0)
		{
			num=p[i];
			for(j=i;j>k;j--)
				p[j]=p[j-1];
			p[k++]=num;
		}
	}
}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
