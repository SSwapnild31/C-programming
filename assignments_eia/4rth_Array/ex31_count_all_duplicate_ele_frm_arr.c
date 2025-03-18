#include<stdio.h>

void print(const int *,int);
void count_dupli(const int *,int);
void main()
{
	int a[10],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	print(a,ele);
	count_dupli(a,ele);	
}

void count_dupli(const int *p,int ele)
{
	int i,j,c;
	for(i=0;i<ele;i++)
	{
		for(j=i+1,c=1;j<ele;j++)
		{
			if(p[i]==p[j])
				c++;
		}
		if(c>1)
			printf("%d -> %d times, ",p[i],c);
		c=0;
	}	
	printf("\n");
}

void print(const int *p,int ele)
{
	for(int i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
