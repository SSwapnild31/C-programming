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
	int i,j,temp,r;
	for(i=0;i<ele;i++)
	{
		r=p[i]%10;
		for(j=2;j<r;j++)
			if(r%j==0)
				break;
		if(r==j)
			p[i]=p[i]/=10;
	}
}
