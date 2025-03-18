#include<stdio.h>

int perfect_fun(const int *,int);
void main()
{
	int a[6],ele,i,idx;
	ele=6;
	printf("Enter ele : ");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	idx=perfect_fun(a,ele);
	if(idx>=0)
		printf("1st perfect num index is %d\n",idx);
	else
		printf("No perfect num is given array\n");
}

int perfect_fun(const int *a,int ele)
{
	int i,j,sum=0;
	for(i=0;i<ele;i++)
	{
		for(j=1,sum=0;j<a[i];j++)
		{
			if(a[i]%j==0)
				sum=sum+j;
		}
		if(a[i]==sum)
		{
			printf("1st perfect num is %d\n",a[i]);
			return i;
		}		
	}
	return -1;
}
