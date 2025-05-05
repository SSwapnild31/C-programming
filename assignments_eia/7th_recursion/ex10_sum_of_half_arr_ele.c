#include<stdio.h>
#include<stdlib.h>

int rec_fun(int *,int);
void main()
{
	int n;
	printf("Enter array size(n) : ");
	scanf("%d",&n);
	
	int *p=calloc(n,sizeof(int));

	printf("enter array ele\n");
	for(int i=0;i<n;i++)
		scanf("%d",p+i);
	
	int sum=rec_fun(p,n/2);
	
	printf("sum : %d\n",sum);
}

int rec_fun(int *p,int ele)
{
	if(ele==0)
		return 0;
	
	return p[0]+rec_fun(p+1,ele-1);
}
