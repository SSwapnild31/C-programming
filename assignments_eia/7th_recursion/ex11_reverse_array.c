#include<stdio.h>
#include<stdlib.h>

void rec_fun(int *,int *);
int main()
{
	int n,i;
	printf("Enter size of arr : ");
	scanf("%d",&n);
	
	int *p=calloc(n,sizeof(int));
	
	printf("Enter %d int arr ele\n",n);
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	
	int *q=p+n-1;
	
	rec_fun(p,q);
	
	printf("After reverse : ");
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
	
	return 0;
}

void rec_fun(int *p,int *q)
{
	static int t;
	 
	if(p>q)
		return ;
	t=*p;
	*p=*q;
	*q=t;

	rec_fun(p+1,q-1);
}
