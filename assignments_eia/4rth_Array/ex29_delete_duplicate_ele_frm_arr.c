#include<stdio.h>

void print(const int *,int);
int duplicate_del(int *,int);
void main()
{
	int a[10],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter arry ele : ");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	print(a,ele);
	ele=duplicate_del(a,ele);
	print(a,ele);
}

int duplicate_del(int *p,int ele)
{
	int i,j,k;
	for(i=0;i<ele-1;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(p[i]==p[j])
			{
				for(k=j;k<ele-1;k++)
					p[k]=p[k+1];
				j--;
				ele--;
			}
		}
	}
	return ele;
}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
