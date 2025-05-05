#include<stdio.h>
#include<stdlib.h>

int rec_fun_cnt(int *,int);
void main()
{
	int n;
	printf("Enter ele num : ");
	scanf("%d",&n);
	
	int *p=calloc(n,sizeof(int));
	
	for(int i=0;i<n;i++)
		scanf("%d",&p[i]);
	
	int count=rec_fun_cnt(p,n);
	
	printf("count : %d\n",count);
}

int rec_fun_cnt(int *p,int ele)
{
	if(ele<=0)
		return 0;
	if(*p>=39 && *p<=99)
		return 1+rec_fun_cnt(p+1,ele-1);
	return rec_fun_cnt(p+1,ele-1);
}
