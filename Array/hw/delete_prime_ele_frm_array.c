#include<stdio.h>

void print(int *,int);
int deletePrime(int *,int);

void main()
{
	int a[10],ele,i;
	ele=10;
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	print(a,ele);
	ele=deletePrime(a,ele);
	print(a,ele);
}

int deletePrime(int *a,int ele)
{
	int i,j,k;
	for(i=0;i<ele;i++)
	{
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
				break;
		}
		if(a[i]==j)
		{
			for(k=i;k<ele-1;k++)
				a[k]=a[k+1];
			i--;
			ele--;
		}
	}
	return ele;
}

void print(int *a,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
