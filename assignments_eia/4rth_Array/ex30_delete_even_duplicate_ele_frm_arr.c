#include<stdio.h>

void print(const int *,int);
int even_duplicate(int *,int);
void main()
{
	int a[10],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter arry ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	print(a,ele);
	ele=even_duplicate(a,ele);
	print(a,ele);
}

int even_duplicate(int *p,int ele)
{
	int i,j,k;
	for(i=0;i<ele;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(p[i]==p[j] && p[j]%2==0)
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
