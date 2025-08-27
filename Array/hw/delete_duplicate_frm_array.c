#include<stdio.h>

void print(int *,int);
int delete_duplicate(int *,int,int);

int main()
{
	int a[7],ele,num;
	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter 7 array ele :\n");
	for(int i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("Enter ele to delete : ");
	scanf("%d",&num);
	
	print(a,ele);
	ele=delete_duplicate(a,ele,num);
	print(a,ele);

	return 0;
}

int delete_duplicate(int *a,int ele,int num)
{
	int i,j,k;
	for(i=0;i<ele;i++)
	{
		if(a[i]==num)
		{
			for(j=i;j<ele-1;j++)
				a[j]=a[j+1];
			ele--;	
			i--;
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
