#include<stdio.h>

void delete(int *,int);
void main()
{
	int a[7],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("array ele :\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	
	delete(a,ele);
	
	printf("after : ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}

void delete(int *p,int ele)
{
	int i,j,sum=0,r;
	for(i=0;i<ele;i++)
	{
		sum=0;
		r=p[i]%10;
		for(j=1;j<r;j++)
			if(r%j==0)
				sum=sum+j;
		if(r==sum)
			p[i]=p[i]/=10;
	}
}
